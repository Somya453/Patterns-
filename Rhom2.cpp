#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++) {
        // Mirror logic: use top half row number even in bottom half
        int row = (i <= n) ? i : (totalRows - i + 1);

        // Print leading spaces to shift pattern
        for (int s = 0; s < n - row; s++) {
            cout << " ";
        }

        // Print stars and spaces for the rhombus
        for (int j = 1; j <= 2 * row - 1; j++) {
            if (j == 1 || j == 2 * row - 1 || row == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}
