#include <iostream>

void happyBirthday(std::string name, int age);

int main(){

    // fucntion = a block of resuable code

    std::string name = "Lucas";
    int age = 20;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout<< "Happy Birthday to you!\n";
    std::cout<< "Happy Birthday to you!\n";
    std::cout<< "Happy Birthday dear " << name << "!\n";
    std::cout<< "Happy Birthday to you!\n";
    std::cout<< "Your are " << age << " years old!\n\n";
}