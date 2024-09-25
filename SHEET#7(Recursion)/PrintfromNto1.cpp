#include <iostream>
using namespace std;

void printNumbers(int N) {
    
    if (N == 0) {
        return;
    }

    cout << N;
    if (N > 1) {
        cout << " ";
    }

    printNumbers(N - 1);
}

int main() {
    int N;
    cin >> N;
    printNumbers(N);
    cout << endl;
    return 0;
}
