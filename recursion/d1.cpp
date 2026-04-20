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

int main(){
    printN(5);
    cout << endl;
    printNIncreasing(5);
    cout << endl;
    return 0;
}
