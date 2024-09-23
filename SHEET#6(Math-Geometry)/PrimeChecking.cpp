#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long N) {
    if (N <= 1) return false;
    if (N == 2) return true;
    if (N % 2 == 0) return false;

    for (long long i = 3; i * i <= N; i += 2) {
        if (N % i == 0)
            return false;
    }

    return true;
}

int main() {
    long long N;
    cin >> N;

    if (isPrime(N))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
