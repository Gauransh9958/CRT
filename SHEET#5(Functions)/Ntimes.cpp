#include <iostream>
using namespace std;

void printCharacter(int N, char C) {
    for (int i = 0; i < N; i++) {
        cout << C;
        if (i < N - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        char C;
        cin >> N >> C;
        printCharacter(N, C);
    }
    
    return 0;
}
