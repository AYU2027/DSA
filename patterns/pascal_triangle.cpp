#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        
        // 1. Leading spaces for the pyramid shape
        for (int space = 0; space < n - i - 1; space++) {
            cout << "  "; 
        }

        // 2. Calculate and print the values
        int val = 1; // Every row starts with 1
        for (int j = 0; j <= i; j++) {
            // Print the current value with some padding
            cout << val << "   "; 
            
            // Calculate the next value in the row mathematically
            val = val * (i - j) / (j + 1);
        }
        
        cout << endl;
    }
    return 0;
}