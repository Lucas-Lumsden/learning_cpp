#include <iostream>

int main(){

    // pseudo=random = not actually random, but close

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // % 6 limits the number to 0-5. Plus one for dice example.
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    // rolling 3 dice! ^

    return 0;
}