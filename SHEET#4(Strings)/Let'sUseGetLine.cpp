#include <iostream>
#include <string>

int main() {
    std::string S;
    
    std::getline(std::cin, S);
    
    size_t pos = S.find('\\');
    
    std::cout << S.substr(0, pos) << std::endl;
    
    return 0;
}
