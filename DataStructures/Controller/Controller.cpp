//
//  Controller.cpp
//  DataStructures
//
//  Created by Burr, Alan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Look code on the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
   
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Data/crime.csv");
    
    for (int index = 200; index < 216; index ++)
    {
        cout << index << " is " << myData[index] << endl;
    }
    
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
