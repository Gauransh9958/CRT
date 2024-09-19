#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    vector<string> reversedWords;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        reversedWords.push_back(word);
    }

    for (size_t i = 0; i < reversedWords.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << reversedWords[i];
    }
    cout << endl;

    return 0;
}
