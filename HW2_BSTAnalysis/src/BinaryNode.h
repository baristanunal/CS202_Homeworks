/*
         * Title: Trees
         * Author: Barış Tan Ünal
         * ID: 22003617
         * Section: 03
         * Assignment: 2
         * Description: description of your code
*/

#ifndef HW2_BINARYNODE_H
#define HW2_BINARYNODE_H

class BinaryNode{

private:
    int value;
    int size;
    BinaryNode* parentPtr;
    BinaryNode* leftChildPtr;
    BinaryNode* rightChildPtr;

    friend class BinarySearchTree;

public:
    /*
    struct TreeNode{
        int value;
        int size;
        TreeNode* parent;
        TreeNode* leftChild;
        TreeNode* rightChild;
    };
    */

    BinaryNode();
    BinaryNode(const int value);
    BinaryNode(const int value,
               BinaryNode* leftChildPtr,
               BinaryNode* rightChildPtr);
    BinaryNode(const int value,
               BinaryNode* leftChildPtr,
               BinaryNode* rightChildPtr,
               BinaryNode* parentPtr);

    void setItem(const int& value);
    int getItem() const;

    bool isLeaf() const;

    BinaryNode* getLeftChildPtr() const;
    BinaryNode* getRightChildPtr() const;
    BinaryNode* getParentPtr() const;

    void setLeftChildPtr(BinaryNode* leftPtr);
    void setRightChildPtr(BinaryNode* rightPtr);
    void setParentPtr(BinaryNode* parPtr);

    void incrementSize();
    void decrementSize();

};

#endif //HW2_BINARYNODE_H


