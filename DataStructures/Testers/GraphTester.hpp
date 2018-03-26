//
//  GraphTester.h
//  DataStructures
//
//  Created by Burr, Alan on 3/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef GraphTester_h
#define GraphTester_h

#include <iostream>
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Structure/NonLinear/Graph.h"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTransversals();
    void findCheapestTransversal();
public:
    void testGraphs();
};

#endif /* GraphTester_h */
