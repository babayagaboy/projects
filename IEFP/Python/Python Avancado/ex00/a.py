import tkinter as tk
from tkinter import messagebox
import time

def update_time():
    current_time = time.strftime('%H:%M:%S')
    label2.config(text= current_time)
    window.after(1000, update_time)

def close_window():
    window.destroy()

window = tk.Tk()
window.title("test")

label = tk.Label(window , text= "test2")
label.pack(padx = 50, pady = 50)

label2 = tk.Label(window, text= '')
label2.pack(padx= 50, pady= 50)
update_time()

close_button = tk.Button(window, text= "CLOSE" , command= close_window())
close_button.pack(padx= 25, pady= 25)

window.mainloop()