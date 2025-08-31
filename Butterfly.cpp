// //Butterfly Pattern

#include <iostream>
using namespace std;

// class Solution {
// public:
//     void butterflyPattern(int N) {
//         // write your code here
//         for(int i=1; i<=N; i++){
//             for(int j=1; j<=i; j++){
//                 cout<<"*";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// };


// int main() {
//     Solution sol;
//     sol.butterflyPattern(5);
//     return 0;
// }


int main(){
    int n;
    cin>>n;


    //Upper part
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
       
       
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Lower part
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}