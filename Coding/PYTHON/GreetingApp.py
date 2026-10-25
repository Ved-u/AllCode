import tkinter as tk

def generate_greeting():
    name = name_entry.get()
    greeting_label.config(text=f"Hello, {name}!")

# Create the main window
window = tk.Tk()
window.title("Greeting App")

# Create and place a label
title_label = tk.Label(window, text="Welcome to the Greeting App", font=("Helvetica", 16))
title_label.pack(pady=20)

# Create and place a text entry field
name_entry = tk.Entry(window, width=40)
name_entry.insert(0, "Your Name")
name_entry.pack(pady=10)

# Create and place a button
generate_button = tk.Button(window, text="Generate Greeting", command=generate_greeting)
generate_button.pack(pady=10)

# Create and place a label to display the greeting
greeting_label = tk.Label(window, text="", font=("Helvetica", 14))
greeting_label.pack(pady=20)

# Start the GUI main loop
window.mainloop()
