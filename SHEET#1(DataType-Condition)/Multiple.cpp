#include <iostream>
using namespace std;

int main() {
    int A, B;
    
    // Input the two numbers
    cin >> A >> B;
    
    // Check if A is a multiple of B or B is a multiple of A
    if (A % B == 0 || B % A == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }
    
    return 0;
}
