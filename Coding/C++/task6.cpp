#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int choice;

    cout << "File and Folder Management Program" << endl;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Create a text file and write to it" << endl;
        cout << "2. Quit" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string fileName, content;

                cout << "Enter the name of the file to create (including extension): ";
                cin >> fileName;

                ofstream outFile(fileName);

                if (outFile.is_open()) {
                    cout << "Enter the content to write to the file (type 'EOF' on a new line to finish):" << endl;

                    // Read content line by line until 'EOF' is entered
                    while (getline(cin, content) && content != "EOF") {
                        outFile << content << endl;
                    }

                    cout << "File created successfully." << endl;

                    outFile.close();
                } else {
                    cerr << "Error: Unable to open the file for writing." << endl;
                }

                break;
            }
            case 2:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
        }

    } while (choice != 2);

    return 0; // Exit successfully
}
