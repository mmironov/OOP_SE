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
    
    LinkedList<int> list;
    list.add(20);
    list.add(40);
    list.add(50);
    
    list.print();
    
    return 0;
}
