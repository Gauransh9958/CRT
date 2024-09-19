#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    int wordCount = 0;
    bool inWord = false;
    for (char c : S) {
        if (isalpha(c)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << wordCount << endl;

    return 0;
}
