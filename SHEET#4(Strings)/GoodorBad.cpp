#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string S;
        getline(cin, S);

        if (S.find("010") != string::npos || S.find("101") != string::npos) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }

    return 0;
}
