//
//  account.cpp
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#include "account.h"
#include <cstring>
#include <iostream>
using namespace std;

const char* Account::DEFAULT_IBAN = "99999999999999999";

void Account::deposit(double amount)
{
    if (amount < 0)
    {
        return;
    }
    
    balance += amount;
}

void Account::withdraw(double amount)
{
    if (amount < 0)
    {
        return;
    }
    
    balance -= amount;
}

double Account::getBalance() const
{
    return balance;
}

const char* Account::getNumber() const
{
    return number;
}

void Account::setName(const char* name)
{
    if (strlen(name) < MIN_NAME_LENGTH)
    {
        return;
    }
    
    delete [] this->name;
    this->name = new char[ strlen(name) + 1 ];
    strcpy(this->name, name);
}
const char* Account::getName() const
{
    return name;
}

void Account::print() const
{
    cout << "Account name: " << getName() << endl;
    cout << "Account number: " << getNumber() << endl;
    cout << "Account balance: " << getBalance() << endl;
}