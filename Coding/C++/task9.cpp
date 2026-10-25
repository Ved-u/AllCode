#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Function to generate a random password
string generateRandomPassword(int length) {
    const string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+";
    const int charsetSize = static_cast<int>(charset.length());

    srand(static_cast<unsigned int>(time(nullptr)));

    string password;

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charsetSize;
        password += charset[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Random Password Generator" << endl;
    
    // Get user-defined password length
    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cerr << "Invalid password length. Please enter a positive value." << endl;
        return 1; // Exit with an error code
    }

    // Generate and display the random password
    string password = generateRandomPassword(passwordLength);
    cout << "Generated Password: " << password << endl;

    return 0; // Exit successfully
}
