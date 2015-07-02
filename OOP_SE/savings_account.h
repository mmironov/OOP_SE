//
//  savings_account.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__savings_account__
#define __OOP_SE__savings_account__

#include <stdio.h>
#include "account.h"

//Automatically generated copy constructor and operator=
//will call the copy construtor and the operator=
//of the base class.
class SavingsAccount : virtual public Account {
    //percentage
    double interestRate;
    bool isInterestPaid;
public:
    SavingsAccount(double interestRate, const char* iban) : Account(iban)
    {
        this->interestRate = interestRate;
        isInterestPaid = false;
    }
    
    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
            }
        }
    }
    
    void payInterest()
    {
        if (!isInterestPaid)
        {
            double interest = (getBalance() * interestRate) / 100;
            deposit(interest);
            isInterestPaid = true;
        }
    }
};

#endif /* defined(__OOP_SE__savings_account__) */
