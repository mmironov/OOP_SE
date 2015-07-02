//
//  current_account.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__current_account__
#define __OOP_SE__current_account__

#include <stdio.h>
#include "account.h"

class CurrentAccount : virtual public Account {
    double overDraftAmount;
public:
    CurrentAccount(const char* iban) : Account(iban)
    {
        overDraftAmount = 0;
    }
    
    CurrentAccount(double overDraftAmount, const char* iban) : Account(iban)
    {
        this->overDraftAmount = overDraftAmount;
    }
    
    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (balance - amount > -overDraftAmount)
            {
                balance -= amount;
            }
        }
    }
};

#endif /* defined(__OOP_SE__current_account__) */
