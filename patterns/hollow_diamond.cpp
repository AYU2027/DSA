#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (half-height): ";
    cin >> n;

    // --- Top Half ---
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) cout << " ";

        // Print stars and hollow spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // --- Bottom Half ---
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) cout << " ";

        // Print stars and hollow spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}