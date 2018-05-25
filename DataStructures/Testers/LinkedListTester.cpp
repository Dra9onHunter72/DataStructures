//
//  LinkedListTester.cpp
//  DataStructures
//
//  Created by Burr, Alan on 5/24/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "LinkedListTester.h"
void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " Is is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " IS is at the front of the list and should be 9" << endl;
}
