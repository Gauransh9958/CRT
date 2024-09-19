#include <iostream>
#include <vector>
using namespace std;

void shiftZerosRight(vector<int>& A) {
    int N = A.size();
    int nonZeroIndex = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] != 0) {
            A[nonZeroIndex++] = A[i];
        }
    }

    for (int i = nonZeroIndex; i < N; i++) {
        A[i] = 0;
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    shiftZerosRight(A);
    
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
