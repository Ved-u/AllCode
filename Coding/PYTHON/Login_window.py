import tkinter as tk
from tkinter import ttk
from tkinter import messagebox

def validate_login():
    username = username_entry.get()
    password = password_entry.get()

    # Replace this with your authentication logic
    if username == "user" and password == "password":
        messagebox.showinfo("Login Successful", "Welcome, " + username)
    else:
        messagebox.showerror("Login Failed", "Invalid username or password")

root = tk.Tk()
root.title("Beautiful Login Window")

style = ttk.Style()
style.configure("TLabel", foreground="blue", font=("Helvetica", 14))
style.configure("TButton", background="green", font=("Helvetica", 12))

frame = ttk.Frame(root, padding=10)
frame.grid(column=0, row=0)

ttk.Label(frame, text="Username:").grid(column=0, row=0)
username_entry = ttk.Entry(frame)
username_entry.grid(column=1, row=0)

ttk.Label(frame, text="Password:").grid(column=0, row=1)
password_entry = ttk.Entry(frame, show="*")
password_entry.grid(column=1, row=1)

login_button = ttk.Button(frame, text="Login", command=validate_login)
login_button.grid(column=1, row=2)

frame.columnconfigure(1, weight=1)

root.mainloop()
