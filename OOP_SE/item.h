//
//  item.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__item__
#define __OOP_SE__item__

#include <stdio.h>

template <typename T>
struct Item {
    T value;
    Item<T>* next;
};

#endif /* defined(__OOP_SE__item__) */