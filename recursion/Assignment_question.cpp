#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


// to print all the occurences of an element in an array using recursion
void printalloccur(vector<int> arr ,int key ,int i ){
    if(i == arr.size()) return;
    if(arr[i] == key) cout << i << " ";
    printalloccur(arr, key, i + 1);
}


// to find the length of a string using recursion
int getLength(string s, int i) {
    // Base Case: Reached the null terminator / end of string size
    if (i == s.length()) return 0; 
    
    // Recursive Step: 1 (for current char) + length of the rest
    return 1 + getLength(s, i + 1);
}



// Recursive function to count valid substrings based on the inclusion-exclusion principle 
// where a valid is string that starts and ends with the same character.
int countRecursive(const string& s, int i, int j) {
    // Base Case 1: Invalid boundaries
    if (i > j) return 0;
    
    // Base Case 2: A single character is exactly 1 valid substring
    if (i == j) return 1;

    // Inclusion-Exclusion Principle
    // Count right-shrunk + left-shrunk - overlap
    int count = countRecursive(s, i + 1, j) + 
                countRecursive(s, i, j - 1) - 
                countRecursive(s, i + 1, j - 1);

    // If the outer boundaries match, it forms a new valid substring
    if (s[i] == s[j]) {
        count++;
    }

    return count;
}

int main(){

     string S = "abcab";
     cout << "Length of the string: " << getLength(S, 0) << endl;
    return 0;
}