#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // odd line: (2*i - 1) stars
        for (int j = 0; j < 2*i - 1; j++) {
            cout << "*";
        }
        cout << "\n";

        // even line: 2 * (2*i - 1) hashes
        for (int j = 0; j < 2*(2*i - 1); j++) {
            cout << "#";
        }
        cout << "\n";
        
    }

    return 0;
}