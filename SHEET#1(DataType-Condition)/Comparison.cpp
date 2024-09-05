#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    
    // Read the input
    cin >> A >> S >> B;
    
    // Determine if the comparison is correct
    bool result = false;
    
    if (S == '<') {
        result = (A < B);
    } else if (S == '>') {
        result = (A > B);
    } else if (S == '=') {
        result = (A == B);
    }
    
    // Output the result
    if (result) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    
    return 0;
}
