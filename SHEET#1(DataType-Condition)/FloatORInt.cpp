#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N;
    
    // Input the number
    cin >> N;
    
    // Get the integer part and the decimal part
    int integerPart = static_cast<int>(N);
    double decimalPart = N - integerPart;
    
    // Check if the decimal part is zero
    if (decimalPart == 0.0) {
        // It's an integer
        cout << "int " << integerPart << endl;
    } else {
        // It's a float
        // Print integer and decimal part with precision
        cout << "float " << integerPart << " " << fixed << setprecision(3) << decimalPart << endl;
    }
    
    return 0;
}
