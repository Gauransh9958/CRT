#include <iostream>
using namespace std;

int main() {
    long long N;
    
    // Input the number N
    cin >> N;
    
    // Calculate the sum using the formula
    long long sum = N * (N + 1) / 2;
    
    // Output the result
    cout << sum << endl;
    
    return 0;
}
