#include <iostream>
#include <iomanip> // For setting the precision
using namespace std;

int main() {
    double R;
    const double PI = 3.141592653;
    
    // Input the radius
    cin >> R;
    
    // Calculate the area
    double area = PI * R * R;
    
    // Output the area with 9 digits after the decimal point
    cout << fixed << setprecision(9) << area << endl;
    
    return 0;
}
