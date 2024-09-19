#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.size();
    vector<string> balancedStrings;
    int countL = 0, countR = 0;
    string currentSubstring;

    for (char c : S) {
        currentSubstring += c;
        if (c == 'L') {
            countL++;
        } else if (c == 'R') {
            countR++;
        }

        if (countL == countR) {
            balancedStrings.push_back(currentSubstring);
            currentSubstring.clear();
            countL = 0;
            countR = 0;
        }
    }

    cout << balancedStrings.size() << endl;
    for (const string& s : balancedStrings) {
        cout << s << endl;
    }

    return 0;
}
