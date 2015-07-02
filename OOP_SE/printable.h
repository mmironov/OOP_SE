//
//  printable.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__printable__
#define __OOP_SE__printable__

#include <stdio.h>

class Printable {
public:
    virtual void print() const = 0;
};

#endif /* defined(__OOP_SE__printable__) */
