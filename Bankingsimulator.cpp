#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    double balance = 0;
    int choice = 0;
    do{

    std::cout << "Enter your choice: \n";

    std::cout << "1. Show balance\n";
    std::cout << "2. Deposit money\n";
    std::cout << "3. Withdraw money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    switch(choice){
        case 1: showBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;
        case 3: 
            balance = balance - withdraw(balance);
            showBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting the UlhoOlho bank!";
            break;
        default: std::cout << "Invalid choice";
    }
    }while(choice != 4);
    return 0;
}
void showBalance(double balance){
    std::cout << "Your balance is: $ " << balance << '\n';
}
double deposit(){
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }
    else {
        std::cout << "thats not a valid amount.";
        return 0;
    }
}
double withdraw(double balance){
    
    double amount = 0;
    std::cout << "Enter the amount to be withdraw: ";
    std::cin >> amount;
    balance = balance - amount;
    if(amount > balance || amount <= 0){
        std::cout << "Insufficient funds or invalid.\n";
        return 0;
    }
    else{
    return amount;
    }
}
