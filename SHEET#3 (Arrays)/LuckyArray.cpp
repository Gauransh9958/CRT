#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
       int min_value = *min_element(A.begin(), A.end());
    
    int count_min = count(A.begin(), A.end(), min_value);
    
    if (count_min % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
    
    return 0;
}
