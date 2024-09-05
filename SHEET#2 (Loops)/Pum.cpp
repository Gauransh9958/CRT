#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int start = 1 + 4 * i;
        cout << start << " " << (start + 1) << " " << (start + 2) << " PUM" << endl;
    }

    return 0;
}
