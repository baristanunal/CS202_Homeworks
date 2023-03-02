/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#ifndef HOMEWORK3_REQUEST_H
#define HOMEWORK3_REQUEST_H


class Request{

public:
    Request();
    ~Request();
    Request( int id, int priorityRank, int reqTime, int prcsTime );

    int getID() const;
    int getPriority() const;
    int getRequestTime() const;
    int getProcessTime() const;
    int getInsertTime() const;

    int getKey() const;
    void setKey( int priorityRank );

    void setID( int ID ) ;
    void setPriority( int priorityRank ) ;
    void setRequestTime( int reqTime ) ;
    void setProcessTime( int prcsTime ) ;
    void setInsertTime( int iTime );

private:
    int id;
    int priority;
    int requestTime;
    int processTime;
    int insertTime;

};


#endif //HOMEWORK3_REQUEST_H
