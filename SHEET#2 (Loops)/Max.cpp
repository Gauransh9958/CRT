#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxNumber = 0;
    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        if (X > maxNumber) {
            maxNumber = X;
        }
    }

    cout << maxNumber << endl;

    return 0;
}
