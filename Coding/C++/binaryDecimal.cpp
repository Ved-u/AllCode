#include <iostream>
#include <cmath>
using namespace  std;
int binaryToInt(int binary) {
    int result = 0;
    int power = 0;
    while (binary > 0) {
        result += binary%10 * pow(2, power++);
        binary /= 10;
    }
    return result;
}
int intToBinary(int number) {
    int binary = 0;
    int place = 1;
    while (number > 0) {
        binary += number%2 * place;
        number /= 2;
        place *= 10;
    }
    return binary;
}
int main() {
    cout << "Binary: " << 1010 << " -> Integer: " << binaryToInt(1010) << endl;
    cout<<intToBinary(15);
    return 0;
}