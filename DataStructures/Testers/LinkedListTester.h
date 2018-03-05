//
//  LinkedListTester.h
//  DataStructures
//
//  Created by Burr, Alan on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedListTester_h
#define LinkedListTester_h

#include "../Model/Structure/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
};

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " IS is at the front of the list and should be 9" << endl;
}

#endif /* LinkedListTester_h */
