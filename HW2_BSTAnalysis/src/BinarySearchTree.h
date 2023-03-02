/*
         * Title: Trees
         * Author: Barış Tan Ünal
         * ID: 22003617
         * Section: 03
         * Assignment: 2
         * Description: description of your code
*/

#include "BinaryNode.h"
#ifndef HW2_BINARYSEARCHTREE_H
#define HW2_BINARYSEARCHTREE_H


class BinarySearchTree{

private:
    BinaryNode* root;

public:
    // Constructors
    BinarySearchTree();
    BinarySearchTree(const int& rootItem);
    BinarySearchTree(const int& rootItem, BinarySearchTree& leftTree, BinarySearchTree& rightTree);
    BinarySearchTree(const BinarySearchTree& tree);
    void copyTree(BinaryNode *treePtr, BinaryNode* &newTreePtr) const;

    // Destructor
    ~BinarySearchTree();
    void destroyTree(BinaryNode*& treePtr);

    // Methods
    bool isEmpty() const;

    int getHeight() const;
    int getHeightHelper( BinaryNode* subTreePtr ) const;

    int getNumberOfNodes() const;
    int getNumberOfNodesHelper( BinaryNode* subTreePtr ) const;

    bool add(int newEntry);
    bool addHelper( BinaryNode* &subTreePtr, int newEntry, BinaryNode* parentPtr );
    void adjustSizeUp( BinaryNode* &childPtr );
    void adjustSizeDown( BinaryNode* &childPtr );

    bool remove(int anEntry);
    bool removeHelper( BinaryNode*& delNode, int anEntry );
    void deleteNode( BinaryNode*& delNode );
    void processLeftmost(BinaryNode * &nodePtr, int& replacementItem);

    bool contains(int anEntry);
    bool containsHelper( BinaryNode* &treePtr, int anEntry );

    void inorderTraverse();
    void inorderHelper(BinaryNode* treePtr);

    int getWidth();
    int getWidthHelper( BinaryNode* treePtr, int level );

    int count( int min, int max );
    int countHelper( BinaryNode* subTreePtr, int min, int max );

    int select( int anEntry );
    int selectHelper( int anEntry, BinaryNode* subTreePtr, bool &found );

    int successor( int anEntry );

    //-----------------------------

    void attachLeftSubtree(BinarySearchTree& leftTree);
    void attachRightSubtree(BinarySearchTree& rightTree);

    //-----------------------------

    /*
    void preorderTraverse(FunctionType visit);
    void inorderTraverse(FunctionType visit);
    void postorderTraverse(FunctionType visit);
     */

    BinarySearchTree& operator=(const BinarySearchTree& rhs);

};


#endif //HW2_BINARYSEARCHTREE_H


