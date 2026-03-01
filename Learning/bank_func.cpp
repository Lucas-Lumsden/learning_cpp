#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdrawal(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
    std::cout << "****** SUPER SAFE BANK ******\n";
    std::cout << "Enter your choice:\n";
    std::cout << "*****************************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposite Money\n";
    std::cout << "3. Withdrawal Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);
    // ^^this will stop it from breaking if non-numbers are entered

    switch (choice)
    {
        case 1: showBalance(balance);
            break;
        case 2: balance += deposit();
                showBalance(balance);
            break;
        case 3: balance -= withdrawal(balance);
                showBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting!\n";
            break;
        default: std::cout << "Invalid Choice!\n";
    }

    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

    double amount = 0;
   
    std::cout << "How much money would you like to deposit?: ";
    std:: cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else{
        std::cout << "Please enter a valid amout: ";
        return 0;
    }
}
double withdrawal(double balance){
    double amount = 0;

    std::cout << "Enter amount to withdrawal: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "Enter valid amount\n";
        return 0;
    }
    else{
        return amount;
    }

return 0;
}