// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

// This structure will only be compiled ONCE
typedef struct {
    int accountNumber;
    double balance;
} BankAccount;

void printBalance(BankAccount *acct);


#endif // ACCOUNT_H