#include <iostream>
#include <vector>
using namespace std;

long long countNonDecreasingSubarrays(const vector<int>& A) {
    int N = A.size();
    long long total_subarrays = 0;
    int length = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] >= A[i - 1]) {
        
            length++;
        } else {
            total_subarrays += (long long)length * (length + 1) / 2;
            length = 1;
        }
    }

    total_subarrays += (long long)length * (length + 1) / 2;
    
    return total_subarrays;
}

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
        
        cout << countNonDecreasingSubarrays(A) << endl;
    }
    
    return 0;
}
