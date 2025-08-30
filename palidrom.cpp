#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j <= (n - 1); j++) {
            cout << " ";
        }
        // Print decreasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // Print increasing numbers
        for (int j = i-1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
