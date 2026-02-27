#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){

    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    // std::cin << age;
    
    // if a string may contain spaces, use this instead,
    
    //std::getline(std::cin, name);

    // If a function like the age question comes before, it will not
    // with getline correctly. Instead, use

    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}