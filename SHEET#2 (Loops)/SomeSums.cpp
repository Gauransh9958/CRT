#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int totalSum = 0;

    for (int i = 1; i <= N; ++i) {
        int digitSum = sumOfDigits(i);

        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    cout << totalSum << endl;
    return 0;
}
