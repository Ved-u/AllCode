#include <stdio.h>
void main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i); // Correctly prints the integer with a space
    }
    getchar(); // Waits for a key press before exiting
}