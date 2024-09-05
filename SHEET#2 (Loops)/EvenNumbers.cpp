#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool hasEven = false;

    for (int i = 2; i <= N; i += 2) { 
                cout << i << endl;
        hasEven = true; 
    }

    if (!hasEven) {
        cout << -1 << endl; 
    }

    return 0;
}
