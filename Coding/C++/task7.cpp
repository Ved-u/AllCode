#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Task {
    string description;
    bool done;
};

// Function to add a task to the to-do list
void addTask(vector<Task>& todoList, const string& description) {
    Task newTask = {description, false};
    todoList.push_back(newTask);
    cout << "Task added successfully." << endl;
}

// Function to display the to-do list
void displayTasks(const vector<Task>& todoList) {
    if (todoList.empty()) {
        cout << "Your to-do list is empty." << endl;
    } else {
        cout << "To-Do List:" << endl;
        cout << setw(5) << "ID" << setw(20) << "Description" << setw(10) << "Status" << endl;
        for (size_t i = 0; i < todoList.size(); ++i) {
            cout << setw(5) << i + 1 << setw(20) << todoList[i].description << setw(10)
                 << (todoList[i].done ? "Done" : "Pending") << endl;
        }
    }
}

// Function to mark a task as done
void markTaskAsDone(vector<Task>& todoList, size_t taskId) {
    if (taskId > 0 && taskId <= todoList.size()) {
        todoList[taskId - 1].done = true;
        cout << "Task marked as done." << endl;
    } else {
        cout << "Invalid task ID." << endl;
    }
}

int main() {
    vector<Task> todoList;
    int choice;

    cout << "To-Do List Management Program" << endl;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Mark a task as done" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter the task description: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, description);
                addTask(todoList, description);
                break;
            }
            case 2:
                displayTasks(todoList);
                break;
            case 3: {
                size_t taskId;
                cout << "Enter the ID of the task to mark as done: ";
                cin >> taskId;
                markTaskAsDone(todoList, taskId);
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1, 2, 3, or 4." << endl;
        }

    } while (choice != 4);

    return 0; // Exit successfully
}
