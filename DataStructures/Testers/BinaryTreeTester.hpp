//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Burr, Alan on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.h"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Structure/NonLinear/BinarySearchTree.h"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
