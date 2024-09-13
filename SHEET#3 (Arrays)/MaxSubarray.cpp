#include <iostream>
#include <vector>
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
        
        vector<int> result;
        
        for (int i = 0; i < N; i++) {
            int max_val = A[i];
            for (int j = i; j < N; j++) {
                max_val = max(max_val, A[j]);
                result.push_back(max_val);
            }
        }
        
        
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
