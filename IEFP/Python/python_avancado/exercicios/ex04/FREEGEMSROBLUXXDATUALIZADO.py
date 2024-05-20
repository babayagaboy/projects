import tkinter as tk
import webbrowser

def open_youtube():
    webbrowser.open("https://youtu.be/dQw4w9WgXcQ?si=mBSerl4RqwaOfEuD")

window = tk.Tk()
window.title("FREE GENERATOR")
window.geometry("300x200")

text1 = tk.Label(window, text="ROBLUX GENERATOR")
text1.pack(anchor="n")

image = tk.PhotoImage(file="/Users/hugoguterres/Documents/projects/IEFP/Python/Python Avancado/exercicios/ex04/Png.png")
image = image.subsample(10)
image1 = tk.Label(window, image=image)
image1.pack(anchor="n")

GemsLabel = tk.Label(text= "QUANTAS GEMAS MANE")
GemsLabel.pack(anchor="n")

nrGemsLabel = tk.Entry(window)
nrGemsLabel.pack(anchor="n")

buttonFin = tk.Button(text= "ENTER", command=open_youtube)
buttonFin.pack(anchor="n")

window.mainloop()
