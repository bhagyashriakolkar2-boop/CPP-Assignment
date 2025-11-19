#include <iostream>
using namespace std;
// Function to calculate x raised to the power of y
// y has a default value of 2
double power(double x, int y = 2) {
    double z = 1.0;
    // Handle negative exponents
    if (y < 0) {
        x = 1.0 / x;
        y = -y;
    }
    // Calculate the power
    for (int i = 0; i < y; ++i) {
        z *= x;
    }
    return z;
}

int main() {
    double base;
    int exp;

    // Example 1: Using the default value for y (y=2)
    cout << "Enter a base number (for default exponent): ";
    cin >> base;
    cout << base << " raised to the power of 2 (default) is: " << power(base) << endl;
    return 0;
}