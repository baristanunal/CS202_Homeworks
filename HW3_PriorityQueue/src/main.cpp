/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#include <iostream>
#include <ostream>          // for output
#include <fstream>          // for input
#include <string>
#include "Simulation.h"

using namespace std;


int main( int argc, char* args[] ) {

    cout << "Hello, World!\n\n\n" << std::endl;

    int avgWaitTime;

    string fileName( args[1] );
    int maxAvgWaitTime = atoi( args[2] );

    Simulation sim;
    int minComputerCount = sim.simulate( fileName, maxAvgWaitTime, avgWaitTime );

    cout << "\n\nAverage waiting time: " << avgWaitTime << " ms" << endl;

    cout << "Minimum number of computers required: " << minComputerCount << endl;

    return 0;
}


