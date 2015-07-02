//
//  account.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__account__
#define __OOP_SE__account__

#include <stdio.h>
#include <cstring>

class Account {
    static const int NUMBER_LENGTH = 17;
    static const int MIN_NAME_LENGTH = 6;
    
    static const int STEP_AMOUNT = 100;
    
    static const char* DEFAULT_IBAN;
    
    double balance;
    char number[NUMBER_LENGTH];
    char* name;
    
    void copy(const Account& other)
    {
        balance = other.balance;
        
        strcpy(number, other.number);
        
        name = new char[ strlen(other.name) + 1 ];
        strcpy(name, other.name);
    }
    
    void del()
    {
        delete [] name;
    }
public:
    Account()
    {
        balance = 0;
        
        strcpy(number, DEFAULT_IBAN);
        
        name = new char[1];
        strcpy(name, "");
    }
    
    Account(const char* iban)
    {
        balance = 0;
        
        if (strlen(iban) != NUMBER_LENGTH)
        {
            strcpy(number, DEFAULT_IBAN);
        }
        else
        {
            strcpy(number, iban);
        }
        
        name = new char[1];
        strcpy(name, "");
    }
    
    Account(const Account& other)
    {
        copy(other);
    }
    
    ~Account()
    {
        del();
    }
    
    Account& operator=(const Account& other)
    {
        if (this != &other)
        {
            del();
            copy(other);
        }
        
        return *this;
    }
    
    Account& operator+=(double amount)
    {
        deposit(amount);
        
        return *this;
    }
    
    Account& operator-=(double amount)
    {
        withdraw(amount);
        
        return *this;
    }
    
    Account& operator++()
    {
        deposit(STEP_AMOUNT);
        
        return *this;
    }
    
    void deposit(double amount);
    void withdraw(double amount);

    double getBalance() const;
    
    const char* getNumber() const;
    
    void setName(const char* name);
    const char* getName() const;
    
    void print() const;
    
    friend Account& operator++(Account& account, int i);
};

bool operator<(const Account& left, const Account& right);
bool operator<(double left, const Account& right);

#endif /* defined(__OOP_SE__account__) */