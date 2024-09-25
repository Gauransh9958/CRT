#include <iostream>
using namespace std;

void printNumbers(int N) {
    
    if (N == 0) {
        return;
    }
    printNumbers(N - 1);
    
    cout << N << endl;
}

int main() {
    int N;
    cin >> N;
    printNumbers(N);
    return 0;
}
