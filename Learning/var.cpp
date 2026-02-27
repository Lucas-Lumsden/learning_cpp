#include <iostream>

int main(){
    
    int x; //declaration
    x = 5; //assigment

    int y = 6;

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    int age = 20;
    int year = 2026;
    int days = 8;

    //double (number including decimal
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';

    //single character
    char grade = 'A';
    char initial = 'b';
    std::cout << initial << '\n';

    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //String (objects that represent a sequence of text)
    std::string name = "Lucas";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << name << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";


    return 0;
}