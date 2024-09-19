#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int n = S.length();
    if (n == 1) {
    
        cout << S << endl;
        return 0;
    }
    
    string smallest = S;
    
    for (int i = 1; i < n; ++i) {
        string left = S.substr(0, i);
        string right = S.substr(i);
        
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        
        string combined = left + right;
        if (combined < smallest) {
            smallest = combined;
        }
    }
    
    cout << smallest << endl;
    
    return 0;
}
