#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    char choice;
    double temperature;

    cout << "Temperature Conversion Program" << endl;

    do {
        // Display menu
        cout << "Choose conversion:" << endl;
        cout << "1. Fahrenheit to Celsius" << endl;
        cout << "2. Celsius to Fahrenheit" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        // Perform chosen conversion or quit
        switch (choice) {
            case '1':
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << endl;
                break;
            case '2':
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << endl;
                break;
            case '3':
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }

    } while (choice != '3');

    return 0; // Exit successfully
}
