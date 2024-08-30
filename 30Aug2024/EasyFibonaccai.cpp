#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << "0" << endl;
        return 0;
    }

    long long a = 0;
    long long b = 1;

    cout << a << " " << b;

    for (int i = 3; i <= N; ++i) {
        long long c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
