#include <iostream>

int main(){

    // type conversion = conversion of a value of one data type
    // to another
    // implicit = automatic
    // explicit = Precode value with new data type (int)

    double x = (int) 3.14;

    std::cout << x;

    // storing an interger as a char converts it to its equivalent on the ASCII table
    
    char z = 100;
    std::cout << z;
    std::cout << (char)100 <<std::endl;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}