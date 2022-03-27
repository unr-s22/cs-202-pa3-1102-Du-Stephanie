#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money
{
private: 

    int money_dollars;
    int money_cents;

public:
    explicit Money(int dollars, int cents);
    explicit Money();

    friend bool operator < (const Money &money1, const Money &money2);
    friend bool operator <= (const Money &money1, const Money &money2);
    friend bool operator > (const Money &money1, const Money &money2);
    friend bool operator >= (const Money &money1, const Money &money2);
    friend bool operator != (const Money &money1, const Money &money2);
    friend bool operator == (const Money &money1, const Money &money2);

    friend Money operator + (const Money &money1, const Money &money2);
    friend Money operator - (const Money &money1, const Money &money2);
    friend std::ostream &operator<<(std::ostream &os, const Money &money);
    
};

#endif