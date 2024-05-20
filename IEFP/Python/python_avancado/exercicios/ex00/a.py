import tkinter as tk
from tkinter import*
import time

def close_window():
    window.destroy()

def update_time():
    current_time = time.strftime('%H:%M:%S')
    label2.config(text= current_time)
    window.after(1000 , update_time)

def counter():
    global i
    i += 1
    label3.config(text= i)

window = tk.Tk()
window.title("counter")

label2 = tk.Label(window, text= "")
label2.pack()
update_time()

i = 0

label3 = tk.Label(window, text= i)
label3.pack(padx= 50, pady= 50)

btn = tk.Button(window, text= "Increment", command= counter)
btn.pack()

close_btn = tk.Button(window, text= "CLOSE", command= close_window)
close_btn.pack()

window.mainloop()