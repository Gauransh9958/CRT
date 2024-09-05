#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Input variables
    int l1, r1, l2, r2;
    
    // Read the intervals
    cin >> l1 >> r1 >> l2 >> r2;
    
    // Compute the intersection boundaries
    int intersectionStart = max(l1, l2);
    int intersectionEnd = min(r1, r2);
    
    // Check if there is a valid intersection
    if (intersectionStart <= intersectionEnd) {
        cout << intersectionStart << " " << intersectionEnd << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}

