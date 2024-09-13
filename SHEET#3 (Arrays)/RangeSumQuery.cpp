#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<long long> A(N + 1, 0);
    vector<long long> P(N + 1, 0); 
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        P[i] = P[i-1] + A[i];
    }
    
    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        cout << P[R] - P[L-1] << endl;}
    
    return 0;
}
