#include <iostream>

int main(){

    std::string name;

    while(name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name;

// While (x) is true, the function repeats until it is not, then moves on

    return 0;
}