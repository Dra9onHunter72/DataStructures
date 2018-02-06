//
//  Header.h
//  DataStructures
//
//  Created by Burr, Alan on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Header_hpp
#define Header_hpp

#include "Node.h"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
    
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setnextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

//Constructors

/**
 This Constructor is used for the building the raw structure before values are known.
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}

/**
 This Constructor is used to create a reference to a instance with data.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

/**
 This Constructor is used to create a refrence to a instance with data and a known link.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer )
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}
#endif /* Header_h */
