/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#include "Request.h"

// Default Constructor
Request::Request(){

}

// Constructor
Request::Request(int ID, int priorityRank, int reqTime, int prcsTime ) {

    id = ID;
    priority = priorityRank;
    requestTime = reqTime;
    processTime = prcsTime;
    insertTime = 0;
}

// Destructor
Request::~Request() {

}

int Request::getID() const {
    return id;
}

int Request::getPriority() const {
    return priority;
}

int Request::getRequestTime() const {
    return requestTime;
}

int Request::getProcessTime() const {
    return processTime;
}

void Request::setID(int ID) {
    id = ID;
}

void Request::setPriority(int priorityRank) {
    priority = priorityRank;
}

void Request::setRequestTime(int reqTime) {
    requestTime = reqTime;
}

void Request::setProcessTime(int prcsTime) {
    processTime = prcsTime;
}

int Request::getKey() const {
    return priority;
}

void Request::setKey(int priorityRank) {
    priority = priorityRank;
}

void Request::setInsertTime(int iTime) {
    insertTime = iTime;
}

int Request::getInsertTime() const {
    return insertTime;
}



