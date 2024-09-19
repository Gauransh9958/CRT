#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    unordered_map<char, char> encryptMap;
    unordered_map<char, char> decryptMap;
    
    for (size_t i = 0; i < original.size(); ++i) {
        encryptMap[original[i]] = key[i];
        decryptMap[key[i]] = original[i];
    }
    
    int Q;
    string S;
    
    cin >> Q;
    cin.ignore();
    getline(cin, S);
    
    string result;
    
    if (Q == 1) {
        for (char c : S) {
            result += encryptMap[c];
        }
    } else {
        for (char c : S) {
            result += decryptMap[c];
        }
    }
    
    cout << result << endl;
    
    return 0;
}
