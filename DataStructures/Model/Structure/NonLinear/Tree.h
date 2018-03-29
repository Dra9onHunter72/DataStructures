//
//  Tree.h
//  DataStructures
//
//  Created by Burr, Alan on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.h"
template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    
};


#endif /* Tree_h */
