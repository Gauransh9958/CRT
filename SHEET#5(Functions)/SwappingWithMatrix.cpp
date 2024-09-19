#include <iostream>
using namespace std;

void swapRows(int A[][500], int N, int X, int Y) {
    for (int j = 0; j < N; j++) {
        int temp = A[X][j];
        A[X][j] = A[Y][j];
        A[Y][j] = temp;
    }
}

void swapColumns(int A[][500], int N, int X, int Y) {
    for (int i = 0; i < N; i++) {
        int temp = A[i][X];
        A[i][X] = A[i][Y];
        A[i][Y] = temp;
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    X--;
    Y--;
    
    int A[500][500];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    swapRows(A, N, X, Y);
    swapColumns(A, N, X, Y);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
