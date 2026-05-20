// main.c
#include <stdio.h>
#include "account.h"     // First inclusion of account.h
#include "transaction.h" // Second inclusion of account.h (inside transaction.h!)

// Implementation of the printBalance function
void printBalance(BankAccount *acct) {
    printf("Account %d Balance: $%.2f\n", acct->accountNumber, acct->balance);
}

// Implementation of the deposit function
void deposit(BankAccount *acct, double amount) {
    acct->balance += amount;
}

int main() {
    BankAccount myAccount = {1001, 500.00};
    
    printBalance(&myAccount);
    printf("Depositing $150...\n");
    deposit(&myAccount, 150.00);
    printBalance(&myAccount);
    
    return 0;
}