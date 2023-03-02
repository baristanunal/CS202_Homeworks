/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#include "Simulation.h"


// Default Constructor
Simulation::Simulation() {

}

// Constructor
Simulation::Simulation(int size) {
    queue = new PriorityQueue( size );
}

// Destructor
Simulation::~Simulation() {
    delete queue;
}

Request* Simulation::buildArray( string fileName, int& arrSize, int& maxEndTime ) {

    int id;
    int priorityRank;
    int reqTime;
    int processTime;

    int opCount;
    ifstream inStream;
    inStream.open(fileName);

    inStream >> opCount;
    Request* reqArray = new Request[ opCount ];

    maxEndTime = 0;
    int curEndTime;

    for( int i = 0; i < opCount; i++ ) {
        inStream >> id;
        inStream >> priorityRank;
        inStream >> reqTime;
        inStream >> processTime;

        curEndTime = ( reqTime + processTime );

        if( curEndTime > maxEndTime ){
            maxEndTime = curEndTime;
        }

        Request newRequest(id, priorityRank, reqTime, processTime);
        reqArray[ i ] = newRequest;
    }

    arrSize = opCount;
    return reqArray;
}


int Simulation::clock( Request* reqArray, int arrSize, int computerCount, int maxEndTime) {

    int totalWaitTime = 0;
    int avgWaitTime;

    Computer* pcArray[ computerCount ];

    // 1. Create a PC array.
    for( int i = 0; i < computerCount; i++ ) {
        pcArray[ i ] = new Computer();
    }

    int lastRequest = 0;

    // 2. Start the clock.

    for( int time = 0; time < maxEndTime; time++ ){

        /*
        // 2.1 Find an appropriate PC to handle the next request.
        while( reqArray[ lastRequest ].getRequestTime() == time ) {

            for( int lastPC = 0; lastPC < computerCount; lastPC++ ) {

                if( !pcArray[ lastPC ]->isOccupied() ) {
                    pcArray[ lastPC ]->setLeftTime( reqArray[ lastRequest ].getProcessTime() ) ;
                }
            }

            lastRequest++;
        }

        for( int i = 0; i < computerCount; i++ ) {

            if( pcArray[ i ]->isOccupied() ) {
                pcArray[ i ]->decrementTime();
            }
        }
         */

        Simulation sim( arrSize );

        // 2.1 If there is a request that should be taken, insert it to the queue.
        while( reqArray[ lastRequest ].getRequestTime() == time ) {

            reqArray[ lastRequest ].setInsertTime( time );
            queue->queueInsert( reqArray[ lastRequest ] );
            lastRequest++;
        }


        bool thereIsAvailablePC = true;

        while( !queue->queueIsEmpty() && thereIsAvailablePC ) {

            thereIsAvailablePC = false;

            for( int lastPC = 0; lastPC < computerCount; lastPC++ ) {

                if( !pcArray[ lastPC ]->isOccupied() ) {

                    Request deletedReq;
                    queue->queueDelete( deletedReq );
                    pcArray[ lastPC ]->setLeftTime( deletedReq.getProcessTime() ) ;
                    thereIsAvailablePC = true;

                    cout << "\nComputer " << lastPC << " takes request " << lastRequest - 1 << " at ms " << time
                         << " (wait: " << time - deletedReq.getInsertTime() << " ms)" << endl;
                }
            }
        }

        if( !thereIsAvailablePC ){
            totalWaitTime++;
        }

        for( int i = 0; i < computerCount; i++ ) {

            if( pcArray[ i ]->isOccupied() ) {
                pcArray[ i ]->decrementTime();
            }
        }
    }

    avgWaitTime = totalWaitTime / arrSize;
    return avgWaitTime;
}


int Simulation::simulate( string fileName, int maxWaitTime, int &avgWaitTime ) {

    int maxEndTime;
    int computerCount = 0;
    int arraySize;
    Request* reqArray;

    reqArray = buildArray( fileName, arraySize, maxEndTime );

    while( avgWaitTime < maxWaitTime ) {

        computerCount++;
        avgWaitTime = clock( reqArray, arraySize, computerCount, maxEndTime );
    }

    return computerCount - 1;
}


