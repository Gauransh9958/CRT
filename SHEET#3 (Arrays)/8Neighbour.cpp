#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<char>> A(N, vector<char>(M));
    

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    
    int X, Y;
    cin >> X >> Y;
    
    X -= 1;
    Y -= 1;
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    bool all_neighbors_x = true;
    
    for (int i = 0; i < 8; i++) {
        int newX = X + dx[i];
        int newY = Y + dy[i];
        
        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (A[newX][newY] != 'x') {
                all_neighbors_x = false;
                break;
            }
        }
    }
    
    if (all_neighbors_x) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}
