#include "Money.h"

Money::Money(int dollars, int cents){

}
Money::Money() {

}

bool operator < (const Money &money1, const Money &money2) 
{
    if((money1.money_dollars == money2.money_dollars) && (money1.money_cents < money2.money_cents)) {
        return true; 
    }else if((money1.money_dollars < money2.money_dollars) && (money1.money_cents < money2.money_cents)) {
        return true;
    } else {
        return false;
    }
}

bool operator <= (const Money &money1, const Money &money2) 
{
    return money1.money_cents <= money2.money_cents;  
}

bool operator > (const Money &money1, const Money &money2) 
{
    return money1.money_cents > money2.money_cents;  
}

bool operator >= (const Money &money1, const Money &money2) 
{
    if((money1.money_dollars == money2.money_dollars) && (money1.money_cents >= money2.money_cents)) {
        return true; 
    }else if(money1.money_dollars >= money2.money_dollars) {
        return true;
    } else {
        return false;
    }
}

bool operator == (const Money &money1, const Money &money2) 
{
    if((money1.money_dollars == money2.money_dollars) && (money1.money_cents == money2.money_cents)) {
         return true;
    } else {
        return false; 
    }
}

bool operator != (const Money &money1, const Money &money2) 
{
    return money1.money_cents != money2.money_cents;  
}

Money operator + (const Money &money1, const Money &money2) 
{
    int moneyDollars = money1.money_dollars + money2.money_dollars;
    int moneyCents = money1.money_cents + money2.money_cents;

    Money money(moneyDollars, moneyCents);
    
    if(moneyCents > 100) 
    {
        moneyDollars++;
        moneyCents += moneyCents - 100;
    }
    return money;
}

Money operator - (const Money &money1, const Money &money2) {
    int moneyDollars = money1.money_dollars - money2.money_dollars;
    int moneyCents = money1.money_cents - money2.money_cents;

    Money money(moneyDollars, moneyCents);

    if(moneyCents < 0) {
        moneyDollars--;
        moneyCents += moneyCents + 100;
    }
    return money;
}

std::ostream &operator<<(std::ostream &os, const Money &money) {
    os << "$" << money.money_cents * 0.01;

    return os;
}

