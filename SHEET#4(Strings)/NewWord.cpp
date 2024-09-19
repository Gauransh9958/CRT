#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    transform(S.begin(), S.end(), S.begin(), ::toupper);

    unordered_map<char, int> freq;

    for (char c : S) {
        freq[c]++;
    }
    int countE = freq['E'];
    int countG = freq['G'];
    int countY = freq['Y'];
    int countP = freq['P'];
    int countT = freq['T'];
    int result = min({countE, countG, countY, countP, countT});

    cout << result << endl;

    return 0;
}
