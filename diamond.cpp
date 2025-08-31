#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Step 1: Print spaces
        for (int s = 1; s <= N - i; s++) {
            cout << "  "; // two spaces for proper alignment
        }

        // Step 2: Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Step 3: Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        // Step 4: New line
        cout << endl;
    }

    return 0;
}




for (int i = 1; i <= N; i++) {
        // Step 1: Print spaces
        for (int s = 1; s <= N - i; s++) {
            cout << "  "; // two spaces for proper alignment
        }

        // Step 2: Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Step 3: Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        // Step 4: New line
        cout << "\n";
    }
