#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    long long gcd = __gcd(a, b);
    
    long long lcm = (a * b) / gcd;
    
    cout << gcd << " " << lcm << endl;

    return 0;
}
