#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
                for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        int min_sum = INT_MAX;
        
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int current_sum = A[i] + A[j] + (j - i);
                
                if (current_sum < min_sum) {
                    min_sum = current_sum;
                }
            }
        }
        
        cout << min_sum << endl;
    }
    
    return 0;
}
