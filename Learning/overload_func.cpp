#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("pepperoni", "mushrooms");

    return 0;
}

// functions can share the same name, as long as they have the same parameters
// also called a function signature

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}