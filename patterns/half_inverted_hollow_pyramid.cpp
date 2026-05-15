#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if(i==0||i==n-1||j==i||j==n-1){
                cout<<" "<<j+1;
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}