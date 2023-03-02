/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#include <ostream>          // for output
#include <fstream>          // for input
#include <string>
#include "PriorityQueue.h"
#include "Request.h"
#include "Computer.h"

// Constructors
PriorityQueue::PriorityQueue( int queueSize ){
    queueArray = new Request [queueSize];
    size = queueSize;
}

// Destructor
PriorityQueue::~PriorityQueue() {
    delete[] queueArray;                // might be: delete queueArray;
}

// Methods
bool PriorityQueue::queueIsEmpty() const {
    return ( size == 0 );
}

void PriorityQueue::queueInsert(Request &item) {

    queueArray[ size ] = item;

    int place = size;
    int parent = (place - 1) / 2;
    while ( (place > 0) && (queueArray[place].getKey() > queueArray[parent].getKey()) ) {
        Request temp = queueArray[parent];
        queueArray[parent] = queueArray[place];
        queueArray[place] = temp;

        place = parent;
        parent = (place - 1) / 2;
    }
    ++size;
}


bool PriorityQueue::queueDelete(Request &item) {
    if (queueIsEmpty())
        return false;
    else {
        item = queueArray[0];
        queueArray[0] = queueArray[--size];
        queueRebuild( 0 );
        return true;
    }
}


void PriorityQueue::queueRebuild(int root) {

    int child = 2 * root + 1;    // index of root's left child, if any
    if (child < size) {
        // root is not a leaf so that it has a left child
        int rightChild = child + 1;    // index of a right child, if any
        // If root has right child, find larger child
        if ((rightChild < size) &&
            (queueArray[rightChild].getKey() > queueArray[child].getKey()))
            child = rightChild;    // index of larger child

        // If root’s item is smaller than larger child, swap values
        if (queueArray[root].getKey() < queueArray[child].getKey()) {
            Request temp = queueArray[root];
            queueArray[root] = queueArray[child];
            queueArray[child] = temp;

            // transform the new subtree into a heap
            queueRebuild(child);
        }
    }
}





