#include <iostream>
using namespace std;

void printMessage(int N) {
    if (N == 0) {
        return;
    }
    cout << "I love Recursion" << endl;
    
    printMessage(N - 1);
}

int main() {
    int N;
    cin >> N;
    printMessage(N);
    return 0;
}
