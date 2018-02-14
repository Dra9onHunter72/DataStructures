//
//  Node.h
//  DataStructures
//
//  Created by Burr, Alan on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class type>
class Node
{
protected:
    Type data;
    
public:
    Node();
    Node(Type data);
    void setData(Type Data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor compilation
    // Since when we create a structure it does not have an item to stor yet.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
#endif /* Node_h */
