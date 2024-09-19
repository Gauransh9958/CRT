#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string S, T;
        getline(cin, S, ' ');
        getline(cin, T);

        string result;
        int lenS = S.length();
        int lenT = T.length();
        int minLen = min(lenS, lenT);

        for (int i = 0; i < minLen; i++) {
            result += S[i];
            result += T[i];
        }

        if (lenS > lenT) {
            result += S.substr(minLen);
        } else {
            result += T.substr(minLen);
        }

        cout << result << endl;
    }

    return 0;
}
