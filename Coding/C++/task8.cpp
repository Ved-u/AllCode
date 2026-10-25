#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0";
    }
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}
// Function to convert binary to decimal
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int power = 0;

    for (int i = static_cast<int>(binary.length()) - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += static_cast<int>(pow(2, power));
        }
        power++;
    }

    return decimal;
}

int main() {
    int choice, decimal;
    string binary;

    cout << "Number Conversion Program" << endl;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Convert decimal to binary" << endl;
        cout << "2. Convert binary to decimal" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a decimal number: ";
                cin >> decimal;
                cout << "Binary representation: " << decimalToBinary(decimal) << endl;
                break;
            case 2:
                cout << "Enter a binary number: ";
                cin >> binary;
                cout << "Decimal representation: " << binaryToDecimal(binary) << endl;
                break;
            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
    } while (choice != 3);
    return 0; // Exit successfully
}