#include <iostream>
using namespace std;

// int main(){
//     int n ; 
//     cin >> n;
//     for(int i = 0;i<n-1;i++){
//         for(int j = 0;j<n-i-1;j++){
//             cout << "  ";
//         }
//         for(int j = 0;j<2*i+1;j++){
//             if(i==0 ||i==n-1 || j == 0){
//                 cout << j+1 << " ";
//             }
//             else if(j == 2*i){
//                 cout << i+1 << " ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }

//         cout << endl;
//     }
// }

int main(){
    int n ;
    cin >> n;
    for(int i = 0;i<n;i++){

        // for spaces 
        for(int j = 0;j<n-i-1;j++){
            cout << "  ";
        }
        for(int j =0;j<2*i+1;j++){
            if(i == 0 || i == n-1 || j == 0 || j == 2*i){
                if(j==0){
                    cout << 1 << " ";
                }
                else if(j == 2*i){
                    cout << i+1 << " ";
                }
                else if(j%2 == 0){
                    cout<<"  " << j+1 << "  ";
                }
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;

    }
    
}