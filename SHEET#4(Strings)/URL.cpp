#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    size_t pos = S.find('?');
    if (pos == string::npos) {
        return 1;
    }
    string query = S.substr(pos + 1);

    stringstream ss(query);
    string pair;
    while (getline(ss, pair, '&')) {
        size_t equalPos = pair.find('=');
        if (equalPos != string::npos) {
            string key = pair.substr(0, equalPos);
            string value = pair.substr(equalPos + 1);
            
            if (key == "username" || key == "pwd" || key == "profile" || key == "role" || key == "key") {
                cout << key << ": " << value << endl;
            }
        }
    }

    return 0;
}
