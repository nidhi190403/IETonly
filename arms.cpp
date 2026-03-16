#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, digits = 0;
    double sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
