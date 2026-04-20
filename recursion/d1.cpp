#include <iostream>
using namespace std;
// recursion  -- {key notes } 

// printing n to 0 using recursion
void printN(int n){
    if(n < 0) return;
    cout << n << " ";
    printN(n - 1);
}

int main(){
    printN(5);
    return 0;
}
