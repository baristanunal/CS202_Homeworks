/*
 * Title: Heaps, Priority Queues
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 3
 * Assignment: 3
 * Description: description of your code
 */

#include "Computer.h"

Computer::Computer() {
    timeLeft = 0;
}

Computer::Computer(int processTimeLeft) {
    timeLeft = processTimeLeft;
}

Computer::~Computer() {

}

bool Computer::isOccupied() {
    return (timeLeft <= 0);
}

void Computer::decrementTime() {
    timeLeft--;
}

int Computer::getLeftTime() const {
    return timeLeft;
}

void Computer::setLeftTime(int newTimeLeft) {
    timeLeft = newTimeLeft;
}

