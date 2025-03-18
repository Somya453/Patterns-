#include <iostream>
using namespace std;


int main(){

    int rows, columns;
    cin>>rows;
    cin>>columns;
    for (int i = 1; i <= rows; i++)
{   for (int j = 0; j < columns; j++)
    if (i==rows||i==1 || j==columns|| j==1 )
    {
        cout<<"*";
    }
    
{
   cout<<" ";
}

    cout<<endl;

}
    
    return 0;
}