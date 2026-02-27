#include <iostream>

int main(){

    // swicth = alternative to using a bunch of "else if" statements
    // - compare one value against matching cases

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    if(month == 1){
        std::cout << "It is January";
    }
    else if(month == 2){
        std::cout << "It is February";
    }
// else if == 1-12 so on and so on you get it
// do this instead
    switch(month){
        case 1:
            std::cout <<"It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        // case etc. etc.
// matches input between case #'s 1-12
// use default to determine output if no matches are entered
        default:
            std::cout << "Please enter in only numbers 1-12!";
    }

    return 0;
}