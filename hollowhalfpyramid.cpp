#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << j << " ";    // print number + space
            } else {
                cout << "  ";        // print two spaces for hollow alignment
            }
        }
        cout << endl;
    }

    return 0;
}
