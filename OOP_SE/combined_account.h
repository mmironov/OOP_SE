//
//  combined_account.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__combined_account__
#define __OOP_SE__combined_account__

#include <stdio.h>
#include "account.h"
#include "savings_account.h"
#include "current_account.h"

class CombinedAccount : public SavingsAccount, public CurrentAccount {
public:
    CombinedAccount(const char* iban, double interestRate, double overDraftAmount) : SavingsAccount(interestRate, iban),
                           CurrentAccount(overDraftAmount, iban),
                           Account(iban)
    {
        
    }
    
    void withdraw(double amount)
    {
        CurrentAccount::withdraw(amount);
    }
};

#endif /* defined(__OOP_SE__combined_account__) */
