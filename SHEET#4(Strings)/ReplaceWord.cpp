#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    string result;
    size_t pos = 0;
    size_t found;


    while ((found = S.find("EGYPT", pos)) != string::npos) {
        result += S.substr(pos, found - pos);
        result += ' ';
        pos = found + 5;
    }

    result += S.substr(pos);

    cout << result << endl;

    return 0;
}
