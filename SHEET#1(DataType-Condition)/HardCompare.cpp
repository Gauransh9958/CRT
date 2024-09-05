#include <iostream>
#include <cmath>  // For log function
using namespace std;

int main() {
    // Input variables
    long long A, B, C, D;
    
    // Read the numbers
    cin >> A >> B >> C >> D;
    
    // Compute the logarithms and their products
    double logA = log(A);
    double logC = log(C);
    
    double value1 = B * logA;
    double value2 = D * logC;
    
    // Compare and print the result
    if (value1 > value2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
