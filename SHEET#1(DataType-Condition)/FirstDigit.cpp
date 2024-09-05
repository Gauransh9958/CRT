#include <iostream>
using namespace std;

int main() {
    int X;
    
    // Input the number
    cin >> X;
    
    // Extract the first digit
    int first_digit = X / 1000;
    
    // Check if the first digit is even or odd
    if (first_digit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    
    return 0;
}
