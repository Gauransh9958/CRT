#include <iostream>
#include <string>
using namespace std;

int main() {
    string expression;
    
    // Input the expression
    cin >> expression;
    
    // Find the operator position
    size_t pos;
    char op;
    
    // Determine the operator and its position
    if ((pos = expression.find('+')) != string::npos) {
        op = '+';
    } else if ((pos = expression.find('-')) != string::npos) {
        op = '-';
    } else if ((pos = expression.find('*')) != string::npos) {
        op = '*';
    } else if ((pos = expression.find('/')) != string::npos) {
        op = '/';
    }
    
    // Extract the operands
    int A = stoi(expression.substr(0, pos));
    int B = stoi(expression.substr(pos + 1));
    
    // Calculate the result based on the operator
    int result;
    switch (op) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
        default:
            cerr << "Invalid operator" << endl;
            return 1;
    }
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
