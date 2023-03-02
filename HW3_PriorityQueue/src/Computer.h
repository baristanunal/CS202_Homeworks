/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#ifndef HOMEWORK3_COMPUTER_H
#define HOMEWORK3_COMPUTER_H


class Computer{

public:
    Computer();
    Computer( int timeLeft );
    ~Computer();

    bool isOccupied();
    void decrementTime();
    int getLeftTime() const;
    void setLeftTime( int newTimeLeft );

private:
    int timeLeft;

};



#endif //HOMEWORK3_COMPUTER_H
