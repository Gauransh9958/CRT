#include <iostream>
using namespace std;

int main() {
    // Declare variables for the four integers, using long long for safety
    long long A, B, C, D;
    
    // Read the four numbers from input
    cin >> A >> B >> C >> D;
    
    // Compute the result of the equation
    long long result = (A * B) - (C * D);
    
    // Print the result in the required format
    cout << "Difference = " << result << endl;
    
    return 0;
}
