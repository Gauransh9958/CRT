#include <iostream>
#include <cmath> // For floor, ceil, and round functions
using namespace std;

int main() {
    int A, B;
    
    // Input the two numbers
    cin >> A >> B;
    
    // Perform the division
    double result = static_cast<double>(A) / B;
    
    // Calculate floor, ceil, and round values
    int floor_result = floor(result);
    int ceil_result = ceil(result);
    int round_result = round(result);
    
    // Output the results in the specified format
    cout << "floor " << A << " / " << B << " = " << floor_result << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil_result << endl;
    cout << "round " << A << " / " << B << " = " << round_result << endl;
    
    return 0;
}
