//
//  List.h
//  DataStructures
//
//  Created by Burr, Alan on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <assert.h>
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Nodes/Node.hpp"

class List()
{
protected:
    int size;

public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_h */
