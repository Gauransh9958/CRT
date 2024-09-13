
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    
    for (int i = 0; i < N; i++) {
        primaryDiagonalSum += A[i][i];
        secondaryDiagonalSum += A[i][N - i - 1];
    }
    
    cout << abs(primaryDiagonalSum - secondaryDiagonalSum) << endl;
    
    return 0;
}
