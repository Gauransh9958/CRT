#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main() {
    // Input variables
    int A, B, C;
    
    // Read the three numbers
    cin >> A >> B >> C;
    
    // Store the numbers in an array
    int numbers[3] = {A, B, C};
    
    // Output the numbers in ascending order
    sort(numbers, numbers + 3); // Sort the array
    
    for (int i = 0; i < 3; ++i) {
        cout << numbers[i] << endl;
    }
    
    // Print a blank line
    cout << endl;
    
    // Output the numbers in the original order
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    
    return 0;
}
