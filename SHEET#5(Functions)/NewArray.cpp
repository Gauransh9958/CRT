#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenateArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> C;
    C.insert(C.end(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());
    return C;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> B(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    vector<int> C = concatenateArrays(A, B);
    
    for (int i = 0; i < C.size(); i++) {
        cout << C[i];
        if (i < C.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
