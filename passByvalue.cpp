#include<bits/stdc++.h>
#include <iostream>

using namespace std;

// This program demonstrates the concept of pass by value in C++.




int func(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    //return -1; // This line is not necessary in C++ main function
    // return 0; // This line is not necessary in C++ main function
}

int main(){
    int num=10;
    
    func(num);
    cout<<num<<endl;
    return 0; // This line is not necessary in C++ main function
}