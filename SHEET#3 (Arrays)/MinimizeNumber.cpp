#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int operations = 0;
    
    while (true) {
        bool all_even = true;
        
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                all_even = false;
                break;
            }
        }
        
        if (all_even) {
            for (int i = 0; i < N; i++) {
                A[i] /= 2;
            }
            operations++;
        } else {
            break;
        }
    }
    
    cout << operations << endl;
    
    return 0;
}
