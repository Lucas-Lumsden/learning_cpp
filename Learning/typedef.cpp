#include <iostream>
#include <vector>

//ex:
//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
    // typedef = reserved keyword used to create an adttional
    // name (alias) for another data type.
    // New identifier for an existing type.
    // Helps with readbility and reduces typos

    text_t firstName = "Lucas";
    number_t age = 20;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

// typedef has been replaced with 'using' (work better w/ templates)

    return 0;
}