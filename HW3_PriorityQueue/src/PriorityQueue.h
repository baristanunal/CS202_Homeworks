/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#include "Request.h"
#include "Computer.h"
#include <string>

using namespace std;

#ifndef HOMEWORK3_PRIORITYQUEUE_H
#define HOMEWORK3_PRIORITYQUEUE_H

class PriorityQueue{

public:
    PriorityQueue( int size );
    ~PriorityQueue();
    bool queueIsEmpty() const;
    void queueInsert( Request& item );
    bool queueDelete( Request& item );

protected:
    void queueRebuild( int root );

private:
    Request* queueArray;
    int size;

};



#endif //HOMEWORK3_PRIORITYQUEUE_H
