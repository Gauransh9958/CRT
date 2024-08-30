#include <iostream>
using namespace std;

// Function to compute factorial of a number
unsigned long long factorial(int N) {
    if (N == 0) {
        return 1; // 0! is 1
    }

    unsigned long long result = 1;
    for (int i = 1; i <= N; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << factorial(N) << endl;
    }

    return 0;
}
