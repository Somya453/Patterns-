#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        // Print increasing numbers
        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}