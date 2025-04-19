#include<bits/stdc++.h>
using namespace std;

// Triangular Pattern
void tri(int n){
    for(int i=0; i<n; i++){
        //Space
        for (int j = 0; j< n-i-1; j++)
        {
            cout<<" ";
        }
        //Star
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<j;
        }
        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }

        {
            //Space
            for (int j = 0; j< n-i-1; j++)
            {
                cout<<" ";
            }
            //Star
            for (int j = 0; j < 2*i+1; j++)
            {
                cout<<j;
            }
            //space
            for (int j = 0; j < n-i-1; j++)
            {
                cout<<" ";
            }
            
            cout<<endl;
        }
    
    }
    


}

int main(){
    int a;
    cin>>a;
    for (int i = 1; i < a; i++)
    {
        int n;
        cin>>n;
        cout<<"no. of rows is: "<<n<<endl;
        tri(n);
    }
    
    
}