//
//  TestingStacksAndQueues.cpp
//  DataStructures
//
//  Created by Burr, Alan on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

Stack<int> numberStack;
LinkedList<int> numberList;
Timer stackTimer, listTimer;

for (int index = 0; index < 10; index++)
{
    numberStack.add(index);
    numberList.add(index);
}

cout << "Get the third from the last item from the structure" << endl;

int index = 0;
int value = -99;
stackTimer.startTimer();

while (index < 7)
{
    cout << numberStack.pop() << endl;
    
    index++
}

stackTimer.stopTimer();
index = 0;
listTimer.startTimer();
value = numberList.getFromIndex(7);
listTimer.stopTimer();

cout << "The time it took to work with Stack" << endl;
stackTimer.displayInformation();
cout << "the time it took to work with List"
listTimer.displayInformation();

cout << "What is left in the Stack" << endl;
LinkedList<int> * listVersion = &numberStack;
int stackSize = listVersion->getSize();
cout << "Stack size is: " << stackSize << endl;
for (int index = 0; index < listSize; index++)
     {
         cout << numberList.getFromIndex(index) << "\t";
     }

void TestStacksAndQueues :: stackVersusQueue()
{
    vector<CrimeData> data = FileController :: readCrimeDataToVector("path to file");
    
    Stack<CrimeData> crimeStack;
    Queue<CrimeData> crimeQueue;
    
    
    for (int index = 0; index < 100; index++)
    {
        CrimeData temp = data.at(index);
        crimeStack.push(temp);
        crimeQueue.enqueue(temp);
    }
    
    Queue<int> queue;
    Stack<int> stack;
    Queue<int> queueFromStack;
    Stack<int> stackFromQueue;
    
    for (int index = 0; index < 10; index++)
    {
        queue.enqueue(index);
        stack.push(index);
    }
    
    for (int index = 0; index < 10; index++)
    {
        cout << index << endl;
        cout << "Queue results: " << queue.dequeue() << endl;
        cout << "Stack results: " << stack.pop() << endl;
    }
    
    for (int index = 0; index < 10; index++)
    {
        queue.enqueue(index);
    }
}
