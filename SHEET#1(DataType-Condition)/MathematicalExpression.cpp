#include <iostream>
#include <sstream>
using namespace std;

int main() {
    // Input variables
    int A, B, C;
    char op, eq;
    
    // Read the expression
    cin >> A >> op >> B >> eq >> C;
    
    // Variable to store the result of the operation
    int result;
    
    // Check the operation and compute the result
    if (op == '+') {
        result = A + B;
    } else if (op == '-') {
        result = A - B;
    } else if (op == '*') {
        result = A * B;
    }
    
    // Check if the given result C matches the computed result
    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}
