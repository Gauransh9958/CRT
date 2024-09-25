#include <iostream>
using namespace std;

void printDigits(long long N) {
    if (N < 10) {
        cout << N;
        return;
    }
    printDigits(N / 10);
    cout << " " << N % 10;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        printDigits(N);
        cout << endl;
    }
    return 0;
}
