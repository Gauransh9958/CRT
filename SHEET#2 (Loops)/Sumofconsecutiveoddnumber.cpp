#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X > Y) {
            swap(X, Y);
        }

        int sum = 0;

        if (X % 2 == 0) {
            X++;
        } else {
            X += 2;
        }

        for (int i = X; i < Y; i += 2) {
            sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}
