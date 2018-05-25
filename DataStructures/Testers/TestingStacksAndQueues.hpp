//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Burr, Alan on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Controller/Tools/Timer.hpp"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Structure/Linear/Queue.h"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Structure/Linear/Stack.h"
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Structure/Linear/List.hpp"
#include <iostream>

using namespace std;

class TestStacksAndQueues 
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};

#endif /* TestingStacksAndQueues_hpp */
