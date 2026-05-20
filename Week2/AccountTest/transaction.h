// transaction.h
#ifndef TRANSACTION_H    // this is a Header Guard to prevent redefinition errors in header files. 
#define TRANSACTION_H

#include "account.h" // Including account.h here!

void deposit(BankAccount *acct, double amount);

#endif // TRANSACTION_H