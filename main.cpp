#include "Money.h"
#include "Account.h"

int main(void)
{
    Account account;

    Money moneyStartDeposit(300, 23);
    account.makeDeposit(moneyStartDeposit);

    std::cout << account << std::endl;

    Money money1Deposit(200, 00);
    Money money2Deposit(300, 24);
    Money money3Deposit(501, 24);

    account.makeDeposit(money1Deposit);
    account.makeDeposit(money2Deposit);
    account.makeDeposit(money3Deposit);

    std::cout << account << std::endl;

    Money money1Withdrawal(300, 10); 
    Money money2Withdrawal(201, 34);

    account.makeWithdrawals(money1Withdrawal);
    account.makeWithdrawals(money2Withdrawal);
    
    std::cout << account << std::endl;

    //testing the operators 
    Money m(100,10);
    Money n(100,10);
    if(m > n) 
        std::cout << "Operator: > not working" << std::endl; 
        
     else 
        std::cout << "Operator: > is working" << std::endl; 
    

    if(m < n) {
        std::cout << "Operator: < is working" << std::endl; 

    } else {
        std::cout << "Operator: < is working" << std::endl; 
    }

    if(m <= n) {
        std::cout << "Operator: <= is working" << std::endl; 

    } else {
        std::cout << "Operator: <= is working" << std::endl; 
    }

    if(m >= n) {
        std::cout << "Operator: >= is working" << std::endl; 

    } else {
        std::cout << "Operator: >= is working" << std::endl; 
    }

    if(m == n) {
        std::cout << "Operator: == is working" << std::endl; 

    } else {
        std::cout << "Operator: == is working" << std::endl; 
    }

    if(m != n) {
        std::cout << "Operator: != is working" << std::endl; 

    } else {
        std::cout << "Operator: != is working" << std::endl; 
    }

    Money moneyMinusTest(0,0); 
    Money moneyAddTest(200,20); 
    if((m - m) == moneyMinusTest) {
        std::cout << "Operator: - is working" << std::endl; 

    } else {
        std::cout << "Operator: -  is working" << std::endl; 
    }

    if((m + n) == moneyAddTest) {
        std::cout << "Operator: + is working" << std::endl; 

    } else {
        std::cout << "Operator: + is working" << std::endl; 
    }

}