#include <iostream>
#include <set>
using namespace std;


int countDistinct(int A[], int N) {
    set<int> distinctNumbers;
    for (int i = 0; i < N; i++) {
        distinctNumbers.insert(A[i]);
    }
    return distinctNumbers.size();
}

int main() {
    int N;
    cin >> N;
    
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cout << countDistinct(A, N) << endl;

    return 0;
}
