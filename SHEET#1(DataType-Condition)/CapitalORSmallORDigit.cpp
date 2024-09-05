#include <iostream>
using namespace std;

int main() {
    char X;
    
    // Input the character
    cin >> X;
    
    // Check if X is a digit
    if (X >= '0' && X <= '9') {
        cout << "IS DIGIT" << endl;
    } 
    // Check if X is an alphabet character
    else if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')) {
        cout << "ALPHA" << endl;
        if (X >= 'A' && X <= 'Z') {
            cout << "IS CAPITAL" << endl;
        } else if (X >= 'a' && X <= 'z') {
            cout << "IS SMALL" << endl;
        }
    }
    
    return 0;
}
