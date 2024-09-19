#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    string S;
    getline(cin, S);

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    char lastChar = '\0';
    int maxSize = 0;
    for (char c : S) {
        if (c != lastChar) {
            maxSize++;
            lastChar = c;
        }
    }
    cout << maxSize << endl;
    return 0;
}
