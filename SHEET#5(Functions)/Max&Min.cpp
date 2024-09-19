#include <iostream>
using namespace std;

int findMin(int A[], int N) {
    int minVal = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < minVal) {
            minVal = A[i];
        }
    }
    return minVal;
}

int findMax(int A[], int N) {
    int maxVal = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > maxVal) {
            maxVal = A[i];
        }
    }
    return maxVal;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << findMin(A, N) << " " << findMax(A, N) << endl;
    return 0;
}
