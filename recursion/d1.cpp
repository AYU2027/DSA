#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// recursion  -- {key notes } 

// printing n to 0 using recursion
void printN(int n){
    if(n < 0) return;
    cout << n << " ";
    printN(n - 1);
}
// printing 0 to n in increasing order using recursion
void printNIncreasing(int n){
    if(n < 0) return;
    printNIncreasing(n - 1);
    cout << n << " ";
}

// factorrial of n using recurion 

int fact(int n){
    if(n == 0) return 1;
    return n*fact(n - 1);
}

// fabonacci of n using recursion
// when two recursive calls are there in a function then it is called tree recursion 
int fabonacci(int n){
    if(n<= 1) return n;
    return fabonacci(n - 1) + fabonacci(n - 2);
}

// check if an array is sorted or not using recursion
bool isSorted(vector<int> arr, int i){
    if(i == arr.size() - 1) return true;
    if(arr[i] > arr[i + 1]) return false;
    return isSorted(arr, i + 1);
}

// first occurrence of an element in an array using recursion
int firstOccurence(vector<int> arr, int key, int i){
    if(i == arr.size()) return -1;
    if(arr[i] == key) return i;
    return firstOccurence(arr, key, i + 1);
}

// last occurrence of an element in an array using recursion
int lastOccurence(vector<int> arr, int key, int i){
    if(i == 0 ) return -1;
    if(arr[i] == key) return i;
    return lastOccurence(arr, key, i - 1);


}
// power of a number using recursion -- O(n) time complexity
int power(int a, int b){
    if(b == 0) return 1;
    return a*power(a, b - 1);
}

// power of a number using recursion -- O(log n) time complexity
// here power get half at each step 
int powerOptimized(int a, int b){
    if(b == 0) return 1;
    int halfPower = powerOptimized(a, b / 2);
    int fullPower = halfPower*halfPower;
    if(b % 2 != 0) fullPower *= a;
    return fullPower;
}

// titling problem  in a 2*n board and tiles of size 2*1
int tilingProblem(int n){
    // base case -- if there is only one way to tile a 2*0 board and 2*1 board
    if(n == 0 || n == 1) return 1;
    // then we two choice -- we can place the tile vertically and then we are left with a 2*(n - 1) board 
    // or we can place the tile horizontally and then we are left with a 2*(n - 2) board
    return tilingProblem(n - 1) + tilingProblem(n - 2);
}


// remove duplicates from a string using recursion

string pureRecursive(string s) {
    // Base case: empty string
    if (s.empty()) return "";

    char first = s[0];
    string rest = s.substr(1);

    // Remove all instances of 'first' from the 'rest' of the string
    rest.erase(remove(rest.begin(), rest.end(), first), rest.end());

    // Build the result: current char + recursive call on the cleaned rest
    return first + pureRecursive(rest);
}






int main(){
    printN(5);
    cout << endl;
    printNIncreasing(5);
    cout << endl;
    return 0;
}
