#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int evenCount = 0, oddCount = 0;
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        // Count even and odd numbers
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        // Count positive and negative numbers
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    // Output the results
    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
