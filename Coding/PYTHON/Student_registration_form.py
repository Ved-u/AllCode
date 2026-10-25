import tkinter as tk
from tkinter import ttk

def submit_form():
    student_name = name_entry.get()
    student_age = age_entry.get()
    selected_courses = [course_listbox.get(idx) for idx in course_listbox.curselection()]
    
    # You can perform actions with the form data here, like saving it to a database or displaying it.
    print("Student Name:", student_name)
    print("Student Age:", student_age)
    print("Selected Courses:", selected_courses)

root = tk.Tk()
root.title("Student Registration Form")

frame = ttk.Frame(root)
frame.grid(column=0, row=0, padx=10, pady=10)

# Name
name_label = ttk.Label(frame, text="Name:")
name_label.grid(column=0, row=0, sticky=tk.W)
name_entry = ttk.Entry(frame)
name_entry.grid(column=1, row=0)

# Age
age_label = ttk.Label(frame, text="Age:")
age_label.grid(column=0, row=1, sticky=tk.W)
age_entry = ttk.Entry(frame)
age_entry.grid(column=1, row=1)

# Courses
courses_label = ttk.Label(frame, text="Select Courses:")
courses_label.grid(column=0, row=2, sticky=tk.W)
course_listbox = tk.Listbox(frame, selectmode=tk.MULTIPLE)
courses = ["Math", "Science", "History", "English"]
for course in courses:
    course_listbox.insert(tk.END, course)
course_listbox.grid(column=1, row=2)

# Submit Button
submit_button = ttk.Button(frame, text="Submit", command=submit_form)
submit_button.grid(column=0, row=3, columnspan=2)

root.mainloop()
