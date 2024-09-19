#include <iostream>
#include <vector>
using namespace std;

void shiftRight(vector<int>& A, int X) {
    int N = A.size();
    X = X % N;
    
    if (X == 0) return;

    vector<int> temp(N);
    
    for (int i = 0; i < X; i++) {
        temp[i] = A[N - X + i];
    }
    
    for (int i = 0; i < N - X; i++) {
        temp[X + i] = A[i];
    }
    
    A = temp;
}

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    shiftRight(A, X);
    
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
