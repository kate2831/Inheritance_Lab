//
// Kate Rivera
// Date: 9/22/25
// Project: 272 Forking & Overloading Exercise
//
#include "ServiceAccount.h"
#include <iostream>

/**
 * @brief Default constructor implementation
 * Initializes a ServiceAccount with default values:
 * - Balance: 0.0
 * - Password: "" (empty string)
 * - Identifier: "default"
 */
ServiceAccount::ServiceAccount() {
    this->setBalance(0.0);
    this->setPassword("");
    this->setIdentifier("default");
}

/**
 * @brief Parameterized constructor implementation
 * @param id Account identifier (must be 4 characters)
 * @param passwd Account password (must be at least 8 characters)
 * @param balance Initial balance (must be non-negative)
 * 
 * Uses setter methods to ensure validation rules are applied
 */
ServiceAccount::ServiceAccount(std::string id, std::string passwd, double balance) {
    this->setBalance(balance);
    this->setPassword(passwd);
    this->setIdentifier(id);
}

/**
 * @brief Getter for account balance
 * @return Current account balance as a double
 */
double ServiceAccount::getBalance() const {
    return this->accountBalance;
}

/**
 * @brief Getter for account identifier
 * @return Account identifier as a string
 */
std::string ServiceAccount::getIdentifier() const {
    return this->accountIdentifier;
}

/**
 * @brief Getter for account password
 * @return Account password as a string
 */
std::string ServiceAccount::getPassword() const {
    return this->accountPassword;
}

/**
 * @brief Setter for account password with validation
 * @param password New password to set
 * 
 * Validates that password is at least 8 characters long.
 * If validation fails, prints error message and leaves password unchanged.
 */
void ServiceAccount::setPassword(std::string password) {
    if (password.length() >= 8)
        this->accountPassword = password;
    else
        std::cout << "Password must be at least 8 characters" << std::endl;
}

/**
 * @brief Setter for account identifier with validation
 * @param identifier New identifier to set
 * 
 * Validates that identifier is exactly 4 characters long.
 * If validation fails, prints error message and leaves identifier unchanged.
 */
void ServiceAccount::setIdentifier(std::string identifier) {
    if (identifier.length() == 4)
        this->accountIdentifier = identifier;
    else
        std::cout << "Identifier must be 4 characters" << std::endl;
}

/**
 * @brief Setter for account balance with validation
 * @param balance New balance to set
 * 
 * Validates that balance is non-negative.
 * If validation fails, prints error message and leaves balance unchanged.
 */
void ServiceAccount::setBalance(double balance) {
    if (balance >= 0)
        this->accountBalance = balance;
    else
        std::cout << "Balance cannot be negative" << std::endl;
}

/**
 * @brief Equality operator implementation
 * @param a First ServiceAccount to compare
 * @param b Second ServiceAccount to compare
 * @return true if both accounts have equal balances, false otherwise
 * 
 * Note: Comparison is based solely on account balance, not identifier or password
 */
bool operator==(const ServiceAccount& a, const ServiceAccount& b) {
    return a.getBalance() == b.getBalance();
}

/**
 * @brief Greater-than operator implementation
 * @param a Left-hand ServiceAccount
 * @param b Right-hand ServiceAccount
 * @return true if account 'a' has a greater balance than account 'b', false otherwise
 * 
 * Note: Comparison is based solely on account balance, not identifier or password
 */
bool operator>(const ServiceAccount& a, const ServiceAccount& b) {
    return a.getBalance() > b.getBalance();
}



