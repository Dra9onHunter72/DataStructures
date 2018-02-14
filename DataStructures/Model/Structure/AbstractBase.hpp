//
//  AbstractBase.h
//  DataStructures
//
//  Created by Burr, Alan on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef AbstractBase_hpp
#define AbstractBase_hpp

#include <assert.h>
#include "../../Nodes/LinearNode.h"

class abstract()
{
    protected:
        int size;

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
#endif /* AbstractBase_h */
