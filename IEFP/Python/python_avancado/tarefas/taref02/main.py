import tkinter as tk
import mysql.connector
import string
import random


mydb = mysql.connector.connect(
    host="localhost",
    database= "user_db",
    user="root",
    password=""
    )

cursor = mydb.cursor()

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

    encrypt_password = encrypt(password)
    
    cursor.execute(f"SELECT * FROM user WHERE username = '{username}' AND password = '{encrypt_password}'")
    
    if cursor.fetchall():
        return True
    else:
        return False


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

    labelFailed = tk.Label(login_window, text="")
    labelFailed.grid(row=3, column=1)

    def ft_pos_login_window(login_entry, password_entry):
        username = login_entry.get()
        password = password_entry.get()

        userid = 0
        useremail = ""
        usermedia = 0

        def edit_user_info():
                
            def destroy_labels():
                label_username_edit.destroy()
                label_id_edit.destroy()
                label_email_edit.destroy()
                label_media_edit.destroy()
                confirm_edit_button.destroy()
            
            edit_button.destroy()
            label_username_edit = tk.Entry(pos_login_window)
            label_id_edit = tk.Entry(pos_login_window)
            label_email_edit = tk.Entry(pos_login_window)
            label_media_edit = tk.Entry(pos_login_window)

            confirm_edit_button = tk.Button(pos_login_window, text="confirm", command=destroy_labels)
            confirm_edit_button.grid(row=4, columnspan=2, padx=5, pady=5)  

            label_username_edit.grid(row=0, column=1, padx=5, pady=5, sticky="w")
            label_id_edit.grid(row=1, column=1, padx=5, pady=5, sticky="w")
            label_email_edit.grid(row=2, column=1, padx=5, pady=5, sticky="w")
            label_media_edit.grid(row=3, column=1, padx=5, pady=5, sticky="w")

        if check_credentials(username, password):

            # try:
            #     cursor.execute(f"SELECT * FROM user_info WHERE username = {username}")
            #     user_info = cursor.fetchone()
            #     if user_info:
                    
            #         pass
            #     else:
            #         cursor.execute("INSERT INTO user_info (username , id , email , media) VALUES (%s , %d , %s , %d)", 
            #                         username , userid , useremail , usermedia)
            #         mydb.commit()
            # except Exception as e:
            #     print("An error occurred:", e)
            
            pos_login_window = tk.Toplevel()
            pos_login_window.title("New Window")
            pos_login_window.geometry("400x200")

            label_username = tk.Label(pos_login_window, text=f"Username: {username}")
            label_id = tk.Label(pos_login_window, text=f"ID: {userid}")
            label_email = tk.Label(pos_login_window, text=f"Email: {useremail}")
            label_media = tk.Label(pos_login_window, text=f"Media: {usermedia}")
            edit_button = tk.Button(pos_login_window, text="edit", command= edit_user_info)

            label_username.grid(row=0, column=0, padx=5, pady=5, sticky="w")
            label_id.grid(row=1, column=0, padx=5, pady=5, sticky="w")
            label_email.grid(row=2, column=0, padx=5, pady=5, sticky="w")
            label_media.grid(row=3, column=0, padx=5, pady=5, sticky="w")
            edit_button.grid(row=4, column=2, padx=5, pady=5)

        else:
            labelFailed.config(text="Login unsuccessful")
            labelFailed.grid(row=3, column=1)
        

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

    label = tk.Label(sign_window, text="")
    label.grid(row=3, column=1)
    
    def save_credentials():

        new_username = sign_login_entry.get()
        new_password = encrypt(sign_password_entry.get())

        cursor.execute("SELECT * FROM user WHERE username = %s", (new_username,))
        existing_user = cursor.fetchone()
        if existing_user:
            label.config(text="This username already exists!")
        else:
            cursor.execute("INSERT INTO user(username, password) VALUES (%s, %s)", (new_username, new_password))
            mydb.commit()
            label.config(text="Sign-up successful!")


    sign_button = tk.Button(sign_window, text="SIGN UP", command=save_credentials)
    sign_button.grid(row=4, column=0, columnspan=2)


window = tk.Tk()
window.title("∑")
window.geometry("200x100")

to_login_button = tk.Button(window, text="LOGIN", command=ft_login_window)
to_login_button.grid(row=3, column=4, padx=5, pady=5)

to_sign_button = tk.Button(window, text="SIGN IN", command=ft_sign_in_window)
to_sign_button.grid(row=3, column=3, padx=5, pady=5)

window.mainloop()