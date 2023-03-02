/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#ifndef HOMEWORK3_SIMULATION_H
#define HOMEWORK3_SIMULATION_H

#include <ostream>          // for output
#include <fstream>          // for input
#include <string>
#include <iostream>
#include "PriorityQueue.h"

using namespace std;

class Simulation{

public:
    Simulation();
    Simulation( int size );
    ~Simulation();

    Request* buildArray( string fileName, int& arrSize, int& maxEndTime );
    int clock( Request* reqArray, int arrSize, int computerCount, int maxEndTime );
    int simulate( string fileName, int maxWaitTime, int& avgWaitTime );

private:
    PriorityQueue* queue;

};


#endif //HOMEWORK3_SIMULATION_H
