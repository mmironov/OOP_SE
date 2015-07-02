//
//  main.cpp
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/1/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#include <iostream>
#include "account.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Account acc("12345678912345678");
    
    acc.setName("Salary account");
    acc.deposit(500);
    acc.deposit(1000);
    acc.withdraw(200);
    acc.withdraw(100000);
    
    Account acc2("123");
    acc2 = acc;
    acc2.setName("PAYMENTS");
    
    acc.print();
    
    Account accounts[5];
    
    return 0;
}
