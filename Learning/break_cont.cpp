#include <iostream>

int main(){

    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if (i == 13)
        {
            continue;
        }
        
        std::cout << i << '\n';
    }

    // with continue, this function skips over 13
    // with break, this function ends once it hits 13

    return 0;
}