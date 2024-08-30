#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int X) {
    if (X <= 1) {
        return false;
    }
    if (X == 2 || X == 3) {
        return true;
    }
    if (X % 2 == 0 || X % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= X; i += 6) {
        if (X % i == 0 || X % (i + 2) == 0) {
            return false; 
        }
    }

    return true;
}

int main() {
    int X;
    cin >> X;

    if (isPrime(X)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
