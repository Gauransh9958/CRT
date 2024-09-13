#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    unordered_set<int> elements;
    
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        elements.insert(value);
    }
    
    for (int i = 0; i < Q; i++) {
        int X;
        cin >> X;
        if (elements.find(X) != elements.end()) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}
