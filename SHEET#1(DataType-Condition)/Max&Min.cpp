#include <iostream>
#include <algorithm> // For min and max functions
using namespace std;

int main() {
    int A, B, C;
    
    // Input the three numbers
    cin >> A >> B >> C;
    
    // Calculate the minimum and maximum values
    int min_val = min({A, B, C});
    int max_val = max({A, B, C});
    
    // Output the results
    cout << min_val << " " << max_val << endl;
    
    return 0;
}
