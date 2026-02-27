#include <iostream>

int main(){

    double temp;
    char unit1;
    char unit2;
    double result;

    std::cout << "***** Temp Converter *****\n";
    std::cout << "Enter Temperature: ";
    std::cin >> temp;

    std::cout << "Enter measured unit (F, C, K): ";
    std::cin >> unit1;

    std::cout << "Enter desired unit (F, C, K): ";
    std::cin >> unit2;

    if (unit1 == 'F' && unit2 == 'C')
    {
        result = (temp - 32) * (0.555555555556);
        std::cout << "Result: " << result << "C" << '\n';
    }
    else if(unit1 == 'F' && unit2 == 'K')
    {
        result = (temp - 32) * (0.555555555556) + 273.15;
        std::cout << "Result: " << result << "K" << '\n';
    }
    else if(unit1 == 'C' && unit2 == 'F')
    {
        result = (temp * 1.8) + 32;
        std::cout << "Result: " << result << "F" << '\n';
    }
    else if(unit1 == 'C' && unit2 == 'K')
    {
        result = temp + 273.15;
        std::cout << "Result: " << result << "K" << '\n';
    }
    else if(unit1 == 'K' && unit2 == 'C')
    {
        result = temp - 273.15;
        std::cout << "Result: " << result << "C" << '\n';
    }
    else if(unit1 == 'K' && unit2 == 'F')
    {
        result = (temp - 273.15) * (1.8) + 32;
        std::cout << "Result: " << result << "F" << '\n';
    }
    else if (unit1 = unit2)
    {
        result = (temp);
        std::cout << "Result: " << result << unit2 << '\n';
    }
    else
    {
        std::cout << "\nI am going to blow up your computer\n";
    }

    std::cout << "**************************";

    return 0;
    
}