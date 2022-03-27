#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account 
{

private:
    std::vector<Money> accountDeposits;
    std::vector<Money> accountWithdrawals;
    bool flagStatus = false;
    Money currentBalance{}; 

public: 

    explicit Account();

    void makeDeposit(Money &money);
    void makeWithdrawals(Money &money);
    Money* returnCurrentBalance();
    friend std::ostream &operator<<(std::ostream &os, Account &accPtr);

    virtual ~Account(); 
    
};

#endif
