#include <iostream>
using namespace std;

int main() {
    long long N, M;
    
    // Input the two numbers
    cin >> N >> M;
    
    // Get the last digits of N and M using the modulo operator
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;
    
    // Calculate the summation of the last digits
    int result = last_digit_N + last_digit_M;
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
