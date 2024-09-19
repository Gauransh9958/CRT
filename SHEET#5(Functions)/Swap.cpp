#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    swapNumbers(X, Y);
    cout << X << " " << Y << endl;
    return 0;
}
