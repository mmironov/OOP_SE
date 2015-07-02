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
    acc += 500;
    acc += 100;
    acc -= 200;
    acc -= 100000;
    ++acc;
    acc++;
    
    Account acc2("123");
    acc2 = acc;
    acc2.setName("PAYMENTS");
    
    acc.print();
    
    if (200 < acc)
    {
        
    }
    
    return 0;
}
