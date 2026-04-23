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

int getLength(string s, int i) {
    // Base Case: Reached the null terminator / end of string size
    if (i == s.length()) return 0; 
    
    // Recursive Step: 1 (for current char) + length of the rest
    return 1 + getLength(s, i + 1);
}

int main(){

    string str = "hello world";
    cout << getLength(str, 0) << endl;
    return 0;
}