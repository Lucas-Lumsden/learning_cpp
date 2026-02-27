#include <iostream>

int main(){

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    // Each time the exterior loop runs, the interior loop must run

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}