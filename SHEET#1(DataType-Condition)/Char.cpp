#include <iostream>
using namespace std;

int main() {
    char X;
    
    // Input the character
    cin >> X;
    
    // Check if X is a lowercase letter
    if (X >= 'a' && X <= 'z') {
        // Convert lowercase to uppercase
        char converted = X - 32;
        cout << converted << endl;
    } 
    // Check if X is an uppercase letter
    else if (X >= 'A' && X <= 'Z') {
        // Convert uppercase to lowercase
        char converted = X + 32;
        cout << converted << endl;
    }
    
    return 0;
}
