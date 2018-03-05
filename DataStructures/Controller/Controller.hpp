//
//  Controller.hpp
//  DataStructures
//
//  Created by Burr, Alan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structure/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Testers/LinkedListTester.h"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Testers/TestingStacksAndQueues.hpp"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Testers/RecursionTester.hpp"

class Controller
{
private:
    void findMaxAndMin();
    void testArray();
public:
    void start();
};
#endif /* Controller_hpp */
