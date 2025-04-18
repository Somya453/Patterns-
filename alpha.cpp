#include<bits/stdc++.h>
using namespace std;

// Triangular Pattern
void tri(int n){
    for(int i=1; i<n; i++){
        for (int j = 0; j < i; j++)
        {
            cout<<"i";
        }
        cout<<endl;
    }

}

int main(){
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int n;
        cin>>n;
        cout<<"The value of n is: "<<n<<endl;
        tri(n);
    }
    
    
}