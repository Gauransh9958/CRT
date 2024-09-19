#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int getMax(const vector<int>& A) {
    int maxNum = A[0];
    for (int num : A) {
        if (num > maxNum) {
            maxNum = num;
        }
    }
    return maxNum;
}

int getMin(const vector<int>& A) {
    int minNum = A[0];
    for (int num : A) {
        if (num < minNum) {
            minNum = num;
        }
    }
    return minNum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(const vector<int>& A) {
    int count = 0;
    for (int num : A) {
        if (isPrime(num)) {
            count++;
        }
    }
    return count;
}

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int countPalindromes(const vector<int>& A) {
    int count = 0;
    for (int num : A) {
        if (isPalindrome(num)) {
            count++;
        }
    }
    return count;
}

int getMaxDivisors(const vector<int>& A) {
    int maxDivisors = 0;
    int numberWithMaxDivisors = A[0];

    for (int num : A) {
        int divisorsCount = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisorsCount++;
            }
        }
        if (divisorsCount > maxDivisors || (divisorsCount == maxDivisors && num > numberWithMaxDivisors)) {
            maxDivisors = divisorsCount;
            numberWithMaxDivisors = num;
        }
    }
    return numberWithMaxDivisors;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "The maximum number : " << getMax(A) << endl;
    cout << "The minimum number : " << getMin(A) << endl;
    cout << "The number of prime numbers : " << countPrimes(A) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(A) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDivisors(A) << endl;

    return 0;
}
