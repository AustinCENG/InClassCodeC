// account.h
#ifndef ACCOUNT_H  // this is a Header Guard to prevent your custom header files generate "redefinition" errors when 
                   // the same header file is included multiple times in a project
#define ACCOUNT_H

// This structure will only be compiled ONCE
typedef struct {
    int accountNumber;
    double balance;
} BankAccount;

void printBalance(BankAccount *acct);


#endif // ACCOUNT_H