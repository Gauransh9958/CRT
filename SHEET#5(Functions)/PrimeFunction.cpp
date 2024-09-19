#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }
    if (N == 2) {
        return true;
    }
    if (N % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        if (isPrime(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
