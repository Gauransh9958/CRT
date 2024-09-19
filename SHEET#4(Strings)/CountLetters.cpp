#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    vector<int> count(26, 0);

    for (char c : S) {
        count[c - 'a']++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (count[c - 'a'] > 0) {
            cout << c << " : " << count[c - 'a'] << endl;
        }
    }

    return 0;
}
