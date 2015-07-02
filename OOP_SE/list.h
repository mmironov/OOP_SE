//
//  list.h
//  OOP_SE
//
//  Created by Miroslav Mironov on 7/2/15.
//  Copyright (c) 2015 Miroslav Mironov. All rights reserved.
//

#ifndef __OOP_SE__list__
#define __OOP_SE__list__

#include <iostream>
#include "item.h"
using namespace std;

template <typename T>
class LinkedList {
    Item<T>* start;
    Item<T>* end;
    
    int size;
public:
    LinkedList()
    {
        size = 0;
        start = 0;
        end = 0;
    }
    
    void add(const T& elem)
    {
        Item<T>* newItem = new Item<T>();
        newItem->value = elem;
        newItem->next = 0;
        
        if (start == 0)
        {
            start = newItem;
            end = newItem;
        }
        else
        {
            end->next = newItem;
            end = newItem;
        }
        
        ++size;
    }
    
    bool get(const int index, T& result) const
    {
        if (index < 0 || index >= size)
        {
            return false;
        }
        
        Item<T>* p = start;
        
        for(int i=0; i < index; ++i) {
            p = p->next;
        }
        
        result = p->value;
        return true;
    }
    
    void print() const
    {
        cout << "[";
        for(int i=0; i < size; ++i)
        {
            T x;
            get(i, x);
            cout << x;
            
            if (i < size - 1)
            {
                cout << ", ";
            }
        }
        
        cout << "]";
    }
};

#endif /* defined(__OOP_SE__list__) */
