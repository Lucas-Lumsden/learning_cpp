#include <iostream>

//Namespace prevents naming conflicts in large projects.
//Allows for identically names entities as long as 
//namespace is different.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
//Sets x to first without needing namespace for each line
    using namespace first;

    int x =0;

//Refers to version of x that is found in "AaBbCc" namespace

    std::cout << first::x;

//Saves on typing but leads to high % of name conflict
 using namespace std;
 
//Safer version
 using std::cout;
    cout << x;
 using std::string;
    string name = "hello";

    return 0;
}
