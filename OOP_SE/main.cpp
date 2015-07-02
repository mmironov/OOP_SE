//
//  main.cpp
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#include <iostream>
#include "account.h"
#include "list.h"
#include "current_account.h"
#include "savings_account.h"
#include "combined_account.h"
#include "printable.h"
using namespace std;

void printAll(Printable* items[], int length)
{
    for(int i=0; i < length; ++i)
    {
        items[i]->print();
    }
}

int main(int argc, const char * argv[]) {
    
    LinkedList<int> list;
    list.add(20);
    list.add(40);
    list.add(50);
    
    list.print();
    
    int type;
    cout << "Enter account type (Savings(0); Current(1)): ";
    cin >> type;
    
    Account* account;
    if (type == 0)
    {
        account = new SavingsAccount(17, "18181818181818181");
        account->setName("Savings");
    }
    else
    {
        account = new CurrentAccount(1000, "19191919191919191");
        account->setName("Current");
    }
    account->deposit(3000);
    
    SavingsAccount* asSavings = dynamic_cast<SavingsAccount*>(account);
    if (asSavings)
    {
        asSavings->payInterest();
    }
    
    account->withdraw(3800);
    
    CombinedAccount combined("123", 17, 2000);
    combined.setName("Combined");
    combined.deposit(5000);
    
    Printable* array[] = {account, &combined};
    
    printAll(array, 2);
    
    delete account;
    
    return 0;
}
