#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter half-height: ";
    cin >> n;

    // Define color constants
    const string RED = "\033[31m";
    const string RESET = "\033[0m";

    // --- Top Half ---
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << RED << "*" << RESET; // Wrap the star in color codes
            else
                cout << " ";
        }
        cout << endl;
    }

    // --- Bottom Half ---
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << RED << "*" << RESET; // Wrap the star in color codes
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}