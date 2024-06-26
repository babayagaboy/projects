import tkinter as tk
import string
import random
import csv
import sqlite3

conn = sqlite3.connect('credencials.db')
cursor = conn.cursor()
cursor.execute('''CREATE TABLE IF NOT EXISTS users (
                    id INTEGER PRIMARY KEY,
                    username TEXT NOT NULL,
                    password TEXT NOT NULL
                )''') 

chars = " " + string.punctuation + string.digits + string.ascii_letters
chars = list(chars)
key = chars.copy()
random.seed(42)
random.shuffle(key)

def encrypt(password):

    encrypt_password = ""

    for letter in password:
        i = chars.index(letter)
        encrypt_password += key[i]

    return encrypt_password

def check_credentials(username, password):

    cursor.execute("SELECT * FROM users WHERE username = ? AND password = ?", (username, encrypt(password)))
    row = cursor.fetchone()
    
    if row:
        return True
    else:
        return False
    
    # with open('credentials.csv', mode='r') as file:
    #     reader = csv.reader(file)
    #     for row in reader:
    #         if row[0] == username and row[1] == encrypt(password):
    #             return True
    # return False

def ft_pos_login_window(login_entry, password_entry):
    username = login_entry.get()
    password = password_entry.get()
    
    if check_credentials(username, password):
        pos_login_window = tk.Toplevel()
        pos_login_window.title("New Window")
        label = tk.Label(pos_login_window, text="Login successful")
        label.pack(padx=100, pady=100)
    else:
        pos_login_window = tk.Toplevel()
        pos_login_window.title("New Window")
        label = tk.Label(pos_login_window, text="Login failed")
        label.pack(padx=100, pady=100)

def ft_login_window():
    login_window = tk.Toplevel()
    login_window.title("New Window")

    login_text = tk.Label(login_window, text="USERNAME")
    login_text.grid(row=0, column=0)

    login_entry = tk.Entry(login_window)
    login_entry.grid(row=0, column=1)

    password_text = tk.Label(login_window, text="PASSWORD")
    password_text.grid(row=2, column=0)

    password_entry = tk.Entry(login_window, show="*")
    password_entry.grid(row=2, column=1)

    login_button = tk.Button(login_window, text="LOGIN", command=lambda: ft_pos_login_window(login_entry, password_entry))
    login_button.grid(row=4, column=0, columnspan=2)

def ft_sign_in_window():
    sign_window = tk.Toplevel()
    sign_window.title("Sign Up")

    sign_login_text = tk.Label(sign_window, text="New USERNAME")
    sign_login_text.grid(row=0, column=0)

    sign_login_entry = tk.Entry(sign_window)
    sign_login_entry.grid(row=0, column=1)

    sign_password_text = tk.Label(sign_window, text="New PASSWORD")
    sign_password_text.grid(row=2, column=0)

    sign_password_entry = tk.Entry(sign_window, show="*")
    sign_password_entry.grid(row=2, column=1)

    def save_credentials():
        new_username = sign_login_entry.get()
        new_password = encrypt(sign_password_entry.get())

        user = (new_username , new_password)
        
        cursor.execute('INSERT INTO users (username, password) VALUES (?, ?)', user)

        # with open('credentials.csv', mode='a', newline='') as file:
        #     writer = csv.writer(file)
        #     writer.writerow([new_username, new_password])
        
        sign_window.destroy()

    sign_button = tk.Button(sign_window, text="SIGN UP", command=save_credentials)
    sign_button.grid(row=4, column=0, columnspan=2)


window = tk.Tk()
window.title("∑")
window.geometry("200x100")

to_login_button = tk.Button(window, text="LOGIN", command=ft_login_window)
to_login_button.grid(row=3, column=2)

to_sign_button = tk.Button(window, text="SIGN IN", command=ft_sign_in_window)
to_sign_button.grid(row=3, column=3)

conn.commit()

window.mainloop()