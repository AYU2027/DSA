#include <bits/stdc++.h>
using namespace std;

//  here the worst case is (O)n^2  and Best Case (O)n^2

vector<int> bubbleSort(vector<int> arr){
    int n = arr.size();

    for(int i = 0 ; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return arr;
}


int main(){

    vector<int> arr = {5,4,3,2,1};
    vector<int> sorted = bubbleSort(arr);
    for(int x : sorted){
        cout << x << ' ';
    }
    cout << endl;

}