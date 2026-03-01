#include <iostream>

// int myNum =3;
// this is a GLOBAL varible (best to avoid)

void printNum();

int main(){

    // Local vairables = declared inside a function block {}
    // Global variables = decleared outside of all functions
    // fucntions will use local variables before it resorts to global

    printNum();

    return 0;
}

void printNum(){
    int myNum= 2;
    // ^^ this is a LOCAL variable
    std::cout << myNum;
}