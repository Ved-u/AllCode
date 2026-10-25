#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int userGuess, attempts = 0;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;
    do {
        // Ask the user to guess
        cout << "Enter your guess: ";
        cin >> userGuess;
        // Increment the attempts counter
        attempts++;
        // Provide hints
        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != secretNumber);
    return 0; // Exit successfully
}