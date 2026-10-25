#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));
    int die1, die2;
    cout << "Welcome to the Dice Rolling Simulator!" << endl;
    // Roll the first die
    die1 = rand() % 6 + 1;
    // Roll the second die
    die2 = rand() % 6 + 1;
    // Display the results
    cout << "You rolled a " << die1 << " and a " << die2 << " for a total of " << (die1 + die2) << "." << endl;
    return 0; // Exit successfully
}
