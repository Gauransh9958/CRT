#include <iostream>
using namespace std;

int main() {
    double X, Y;
    
    // Input the coordinates
    cin >> X >> Y;
    
    // Check if the point is at the origin
    if (X == 0 && Y == 0) {
        cout << "Origem" << endl;
    }
    // Check if the point is on the X or Y axis
    else if (X == 0) {
        cout << "Eixo Y" << endl;
    } else if (Y == 0) {
        cout << "Eixo X" << endl;
    }
    // Determine the quadrant
    else if (X > 0 && Y > 0) {
        cout << "Q1" << endl;
    } else if (X < 0 && Y > 0) {
        cout << "Q2" << endl;
    } else if (X < 0 && Y < 0) {
        cout << "Q3" << endl;
    } else if (X > 0 && Y < 0) {
        cout << "Q4" << endl;
    }
    
    return 0;
}
