#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        // Print leading spaces
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }

        // Print stars
        for (int k = 0; k < (2 * i - 1); ++k) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
