#include <iostream>

int main() {
    int N;
    std::cin >> N;

    
    if (N == 1) {
        std::cout << 0 << std::endl;
        return 0;
    } else if (N == 2) {
        std::cout << 1 << std::endl;
        return 0;
    }

    long long fib1 = 0, fib2 = 1, fibN;

    for (int i = 3; i <= N; ++i) {
        fibN = fib1 + fib2;
        fib1 = fib2;
    fib2 = fibN;
    }

    std::cout << fibN << std::endl;
    return 0;
}













// #include <iostream>
// using namespace std;

// int main() {
//     int fib[51];
    
    
//     fib[1] = 0;
//     fib[2] = 1;
    
//     for (int i = 3; i <= 50; ++i) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
    
//     int N;
//     cin >> N;
//     cout << fib[N] << endl;

//     return 0;
// }
