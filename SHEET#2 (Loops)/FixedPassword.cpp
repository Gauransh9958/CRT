#include <iostream>
using namespace std;

int main() {
    int X;
    const int correctPassword = 1999;

    while (true) {
        cin >> X;
        if (X == correctPassword) {
            cout << "Correct" << endl;
            break; // Exit the loop since the correct password is found
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
