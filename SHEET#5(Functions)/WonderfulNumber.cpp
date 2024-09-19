#include <iostream>
#include <string>
using namespace std;

bool isOdd(int N) {
    return N % 2 != 0;
}

bool isBinaryPalindrome(int N) {
    string binary = "";
    while (N > 0) {
        binary = (N % 2 == 0 ? "0" : "1") + binary;
        N /= 2;
    }
    int len = binary.length();
    for (int i = 0; i < len / 2; i++) {
        if (binary[i] != binary[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    if (isOdd(N) && isBinaryPalindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
