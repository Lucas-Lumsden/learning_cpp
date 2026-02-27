#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific
    // arithmetic operation  (+ - * /)

    int students = 20;

// each section returns the same output

    //students = students + 1;
    //students+=1;
    //students++;

    //students = students - 1;
    //students-=1;
    //students--;

    //students = students * 2;
    //students*=2;

    //students = students / 2;
    //students/=2;

    // '%' -modulous operator
    // usefule for finding even vs odd #s because it displays
    // remainders of division functions

    int remainder = students % 3;

    std::cout << remainder;

    return 0;
}

int main(){

    // order of function priority
    // parenthesis
    // multiplication & division
    // addition & subtraction

    int students = 6 - (5 + 4) *3 / 2;

    std::cout << students;

    return 0;
}