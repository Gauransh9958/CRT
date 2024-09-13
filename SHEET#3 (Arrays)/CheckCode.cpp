#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    string S;
    cin >> S;
    
    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }
    
    for (int i = 0; i < S.size(); i++) {
        if (i == A) continue;
        if (!isdigit(S[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}
