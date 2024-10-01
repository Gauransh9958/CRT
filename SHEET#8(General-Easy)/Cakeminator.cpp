#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    vector<string> cake(r);
    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }
    
    vector<bool> row_eatable(r, true), col_eatable(c, true);
    
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                row_eatable[i] = false;
                break;
            }
        }
    }
    
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            if (cake[i][j] == 'S') {
                col_eatable[j] = false;
                break;
            }
        }
    }
    
    int count = 0;
    
    for (int i = 0; i < r; i++) {
        if (row_eatable[i]) {
            count += c;
        }
    }
    
    for (int j = 0; j < c; j++) {
        if (col_eatable[j]) {
            for (int i = 0; i < r; i++) {
                if (!row_eatable[i]) {
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
