//
//  Timer.hpp
//  DataStructures
//
//  Created by Burr, Alan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <Tools/time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executeTime;
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
