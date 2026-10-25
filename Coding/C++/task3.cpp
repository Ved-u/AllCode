#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));
    // Options for the game
    const char options[] = {'R', 'P', 'S'};
    const int numOptions = 3;
    char userChoice, computerChoice;
    cout << "Welcome to Rock, Paper, Scissors Game!" << endl;
    do {
        // User's turn
        cout << "Enter your choice (R for Rock, P for Paper, S for Scissors, Q to Quit): ";
        cin >> userChoice;

        // Convert to uppercase for simplicity
        userChoice = toupper(userChoice);

        // Quit the game if the user chooses to do so
        if (userChoice == 'Q') {
            cout << "Thanks for playing. Goodbye!" << endl;
            break;
        }

        // Validate user input
        if (userChoice != 'R' && userChoice != 'P' && userChoice != 'S') {
            cout << "Invalid choice. Please enter R, P, S, or Q." << endl;
            continue;
        }

        // Computer's turn
        computerChoice = options[rand() % numOptions];

        // Display choices
        cout << "You chose: " << static_cast<char>(userChoice) << endl;
        cout << "Computer chose: " << static_cast<char>(computerChoice) << endl;
        // Determine the winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 'R' && computerChoice == 'S') ||
                   (userChoice == 'P' && computerChoice == 'R') ||
                   (userChoice == 'S' && computerChoice == 'P')) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

    } while (userChoice != 'Q');
    return 0; // Exit successfully
}