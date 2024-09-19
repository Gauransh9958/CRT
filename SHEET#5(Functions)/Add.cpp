#include <iostream>
using namespace std;

int summation(int x, int y) {
    return x + y;
}

int main() {
    int X, Y;
    cin >> X >> Y;

    cout << summation(X, Y) << endl;
    return 0;
}
