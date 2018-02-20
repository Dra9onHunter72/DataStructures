//
//  FileController.hpp
//  DataStructures
//
//  Created by Burr, Alan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "/Users/abur9000/Documents/CS 2420/DataStructures/DataStructures/Model/Structure/LinkedList.hpp"

static LinkedList<CrimeData> readDataToList(string filename);
LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path.
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                if (currentCSVLine.length() ! = 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row)
                }
            }
            rowCount++
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */
