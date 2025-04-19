#include <iostream>
#include "library.hpp"

int main(){

    std::cout << pow(2, 0) << std::endl;
    std::cout << factorial(4) << std::endl;
    std::cout << absolute(-6) << std::endl;
    std::cout << min(9, 6) << std::endl;
    std::cout << max(-1, 1) << std::endl;

    return 0;
}