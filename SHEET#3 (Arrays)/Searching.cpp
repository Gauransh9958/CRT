#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    int X;
    std::cin >> X;

    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;
    return 0;
}
