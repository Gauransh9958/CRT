#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

  
    string reversedN = string(N.rbegin(), N.rend());

    size_t firstNonZero = reversedN.find_first_not_of('0');
    if (firstNonZero != string::npos) {
        reversedN = reversedN.substr(firstNonZero);
    } else {
        reversedN = "0"; 
    }


    cout << reversedN << endl;
    if (N == string(N.rbegin(), N.rend())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
