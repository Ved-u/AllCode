import tkinter as tk

def register():
    username = username_entry.get()
    password = password_entry.get()
    confirm_password = confirm_password_entry.get()

    if password == confirm_password:
        result_label.config(text=f"Registration successful for {username}")
    else:
        result_label.config(text="Password and Confirm Password do not match")

root = tk.Tk()
root.title("Sign-up Window")

# Labels and Entry Widgets
username_label = tk.Label(root, text="Username:")
username_label.pack()

username_entry = tk.Entry(root)
username_entry.pack()

password_label = tk.Label(root, text="Password:")
password_label.pack()

password_entry = tk.Entry(root, show="*")  # Passwords are displayed as "*"
password_entry.pack()

confirm_password_label = tk.Label(root, text="Confirm Password:")
confirm_password_label.pack()

confirm_password_entry = tk.Entry(root, show="*")  # Passwords are displayed as "*"
confirm_password_entry.pack()

# Registration Button
register_button = tk.Button(root, text="Register", command=register)
register_button.pack()

result_label = tk.Label(root, text="")
result_label.pack()

root.mainloop()
