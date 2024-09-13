#include <iostream>
using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M;

    int A[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    cin >> X;

    bool found = false;
    for (int i = 0; i < N && !found; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == X) {
                found = true;
                break;
            }
        }
    }

    if (found) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }

    return 0;
}
