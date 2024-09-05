#include <iostream>
#include <vector>
using namespace std;

bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> luckyNumbers;

    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }

    if (luckyNumbers.empty()) {
        cout << "-1" << endl;
    } else {
        for (int num : luckyNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
