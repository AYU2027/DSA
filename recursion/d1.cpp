#include <iostream>
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
bool isSorted(int arr[], int n){
        if(n == 0 || n == 1) return true;
            if(arr[0] > arr[1]) return false;
                return isSorted(arr + 1, n - 1);
                }



int main(){
    printN(5);
    cout << endl;
    printNIncreasing(5);
    cout << endl;
    return 0;
}
