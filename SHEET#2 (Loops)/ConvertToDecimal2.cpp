#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        unsigned int N;
        cin >> N;
        
        int countOfOnes = bitset<32>(N).count();
        
        unsigned int result = (1 << countOfOnes) - 1;
        
        cout << result << endl;
    }

    return 0;
}
