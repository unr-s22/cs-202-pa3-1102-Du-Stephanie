#include "Account.h"

Account::Account() 
{

}

void Account::makeDeposit(Money &money) 
{
    accountDeposits.push_back(money); 
    flagStatus = true; 
}

void Account::makeWithdrawals(Money &money) 
{
    accountWithdrawals.push_back(money); 
    flagStatus = true;   
}

Money* Account::returnCurrentBalance(){
    if(flagStatus == true) {

        currentBalance  = currentBalance - currentBalance; 

        for(int i = 0; i < accountDeposits.size(); i++) {
            currentBalance = currentBalance + accountDeposits[i];
        }

        for(int j = 0; j < accountWithdrawals.size(); j++) {
            currentBalance = currentBalance - accountDeposits[j];
        }

        flagStatus = false; 
    }

    return &currentBalance;
}

std::ostream &operator<<(std::ostream &os, Account &accPtr) 
{
    int index = 1; 
    int index2 = 1;

   os << "Account Details\n--------------------------\nCurrent Balance:" << *accPtr.returnCurrentBalance() << "\n--------------------------\nNumber of Deposits: " << accPtr.accountDeposits.size() << "\n--------------------\n";
   for (int i = 0; i < accPtr.accountDeposits.size(); i++) 
   { 
       os << "(" << index << ")" << " " << accPtr.accountDeposits[i] << "\n"; 
       index++; 
   }

   os << "--------------------------\n" << "Number of Withdrawals: " << accPtr.accountWithdrawals.size() << "\n--------------------------\n";
   for (int j = 0; j < accPtr.accountWithdrawals.size(); j++) {
       os << "(" << index2 << ")" << " " << accPtr.accountDeposits[j] << "\n"; 
       index2++;
   }

    return os; 
}

Account::~Account() 
{

}