#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int minValue = A[0];
    int minPosition = 0;

    for (int i = 1; i < N; ++i) {
        if (A[i] < minValue) {
            minValue = A[i];
            minPosition = i;
        }
    }

    cout << minValue << " " << minPosition + 1 << endl;

    return 0;
}
