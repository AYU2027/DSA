#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // 1. Print leading spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  "; 
        }

        // 2. Left side: Increasing numbers
        
        for (int j = 0; j < i+1; j++) {
            cout << i+j+1 << " ";
        }

       

        // 4. Right side: Decreasing numbers
        int h = i * 2;
        for (int j = 0; j < i; j++) {
            cout << h-- << " ";
        }

        cout << endl;
    }

    return 0;
}