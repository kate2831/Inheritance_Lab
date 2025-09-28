//
// Kate Rivera
// Date: 9/28/25
// Lab Activities: Inheritance
//
#include <iostream>
#include "ServiceAccount.h"

/**
 * @brief Main function demonstrating ServiceAccount operator overloading
 * 
 * This program demonstrates the functionality of the ServiceAccount class,
 * specifically testing the overloaded equality (==) and greater-than (>) operators.
 * 
 * The program creates two ServiceAccount objects and compares them using
 * custom operators that compare based on account balance.
 * 
 * @return 0 on successful execution
 */
int main() {
    // New menu system to test operators for deposits & withdrawals, static functions for printing & creaing accounts
    int displayMenu;
    do{
        std::cout << "\nMenu:\n";
        std::cout << "1. Make deposit\n";
        std::cout << "2. Make withdrawal\n";
        std::cout << "3. Print account";
        std::cout << "4. Create account\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        return choice;
    }

    // Function to run menu loop
    void runMenu(){
        int choice;
        do{
            choice = displayMenu();
            switch(choice){
                case 1:
                    std::cout << "Please state how much you would like to deposit: ";
                    break;
                case 2:
                    std::cout << "Please state how much you would like to withdraw: ";
                    break;
                case 3:

                    break;
                case 4:

                    break;
            }
        } while (choice != 5);
    }

    
    // Create first ServiceAccount with identifier "0112", password "password", and balance $1000.00
    // ServiceAccount a("0112", "password", 1000.00);
    
    // Create second ServiceAccount with identifier "9098", same password, and same balance $1000.00
    // ServiceAccount b("9098", "password", 1000.00);

    // Test equality operator (==) - compares accounts based on balance only
    if (a == b)
        std::cout << "Accounts are equal" << std::endl;
    else
        std::cout << "Accounts are not equal" << std::endl;
    
    // Modify account 'a' balance to $10.00 to demonstrate the greater-than operator
    a.setBalance(10.00);
    
    // Test greater-than operator (>) - compares accounts based on balance only
    if (a > b)
        std::cout << "Account a has more money" << std::endl;
    else
        std::cout << "Account b has more money" << std::endl;
    
    return 0;  // Indicate successful program execution
}
