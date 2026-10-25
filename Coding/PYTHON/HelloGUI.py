import tkinter as tk
from tkinter import ttk

def change_label_text():
    label.config(text="Hello, Beautiful GUI!")

root = tk.Tk()
root.title("Simple and Beautiful GUI")

frame = ttk.Frame(root)
frame.grid(column=0, row=0, padx=20, pady=20)

label = ttk.Label(frame, text="Click the button below")
label.grid(column=0, row=0, padx=10, pady=10)

button = ttk.Button(frame, text="Click me!", command=change_label_text)
button.grid(column=0, row=1, padx=10, pady=10)

root.mainloop()
