#include<bits/stdc++.h>
using namespace std;

//Nested loops in C++

void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"The value of n is: "<<n<<endl;
    print(n);

}
