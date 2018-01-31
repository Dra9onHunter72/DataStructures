//
//  Timer.cpp
//  DataStructures
//
//  Created by Burr, Alan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executeTime = 0;
}

void Timer :: resetTimer()
{
    executeTime = 0;
}

void Timer :: startTimer()
{
    executeTime = clock();
}

void Timer :: stopTimer()
{
    assert(executeTime != 0);
    executeTime = clock() - executeTime;
}

void Timer :: displayInformation()
{
    cout << "The execution time is: " << executeTime << endl;
    cout << "In human time it is " << double (executeTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

long Timer :: getTimeInMicroseconds()
{
    return executeTime;
}