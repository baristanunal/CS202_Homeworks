/*
         * Title: Trees
         * Author: Barış Tan Ünal
         * ID: 22003617
         * Section: 03
         * Assignment: 2
         * Description: description of your code
*/

#include "BinaryNode.h"
#include <iostream>
using namespace std;

// Constructors

BinaryNode::BinaryNode()
{
    parentPtr = NULL;
    leftChildPtr = NULL;
    rightChildPtr = NULL;
}

BinaryNode::BinaryNode(const int newValue)
{
    value = newValue;
    parentPtr = NULL;
    leftChildPtr = NULL;
    rightChildPtr = NULL;
}

BinaryNode::BinaryNode(const int newValue, BinaryNode* leftPtr, BinaryNode* rightPtr, BinaryNode* parPtr)
{
    value = newValue;
    parentPtr = parPtr;
    leftChildPtr = leftPtr;
    rightChildPtr = rightPtr;
}


// Methods

bool BinaryNode::isLeaf() const
{
    return (leftChildPtr == NULL) || (rightChildPtr == NULL);
}

int BinaryNode::getItem() const
{
    return value;
}

void BinaryNode::setItem(const int& newValue)
{
    value = newValue;
}

BinaryNode* BinaryNode::getRightChildPtr() const
{
    return rightChildPtr;
}

BinaryNode* BinaryNode::getLeftChildPtr() const
{
    return leftChildPtr;
}

BinaryNode* BinaryNode::getParentPtr() const
{
    return parentPtr;
}

void BinaryNode::setRightChildPtr(BinaryNode* rightPtr)
{
    rightChildPtr = rightPtr;
}

void BinaryNode::setLeftChildPtr(BinaryNode* leftPtr)
{
    leftChildPtr = leftPtr;
}

void BinaryNode::setParentPtr(BinaryNode* parPtr)
{
    parentPtr = parPtr;
}

void BinaryNode::incrementSize() {
    size = size + 1;
}

void BinaryNode::decrementSize() {
    size = size - 1;
}







