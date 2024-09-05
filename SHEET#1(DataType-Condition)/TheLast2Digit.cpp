#include <iostream>
using namespace std;

int main() {
    // Input variables
    long long A, B, C, D;
    
    // Read the four numbers
    cin >> A >> B >> C >> D;
    
    // Compute the result
    long long result = (A % 100) * (B % 100) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) % 100;
    
    // Output the last 2 digits with leading zeros if necessary
    cout << (result < 10 ? "0" : "") << result << endl;
    
    return 0;
}
