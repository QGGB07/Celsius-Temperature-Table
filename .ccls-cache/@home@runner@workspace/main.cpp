#include <iostream>
#include <iomanip>
using namespace std;

// Global constants for flexibility
const int MIN_FAHRENHEIT = 0;
const int MAX_FAHRENHEIT = 20;

// Function to convert Fahrenheit to Celsius
double getCelsius(int fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Main function
int main() {
    cout << "Fahrenheit to Celsius Conversion Table\n";
    cout << "--------------------------------------\n";
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius\n";

    for (int f = MIN_FAHRENHEIT; f <= MAX_FAHRENHEIT; f++) {
        double c = getCelsius(f);
        cout << setw(12) << f << setw(12) << fixed << setprecision(1) << c << endl;
    }

    return 0;
}
