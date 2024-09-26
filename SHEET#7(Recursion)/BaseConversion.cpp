#include <iostream>
using namespace std;

void printBinary(long long N) {
    if (N == 0) return;
    printBinary(N / 2);
    cout << (N % 2);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        if (N == 0) {
            cout << 0 << endl;
        } else {
            printBinary(N);
            cout << endl;
        }
    }
    return 0;
}
