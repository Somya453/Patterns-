#include<bits/stdc++.h>
using namespace std;

// Triangular Pattern
void tri(int n){
    for(int i=1; i<=n; i++){
        for (int j = 1; j <n-i+1; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

}

int main(){
    int a;
    cin>>a;
    for (int i = 1; i < a; i++)
    {
        int n;
        cin>>n;
        cout<<"No. of rows is: "<<n<<endl;
        tri(n);
    }
    
    
}