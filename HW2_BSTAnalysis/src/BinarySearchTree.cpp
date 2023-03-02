/*
         * Title: Trees
         * Author: Barış Tan Ünal
         * ID: 22003617
         * Section: 03
         * Assignment: 2
         * Description: description of your code
*/

#include "BinarySearchTree.h"
#include "BinaryNode.h"
#include <iostream>
#include <algorithm>
using namespace std;


// Default constructor
BinarySearchTree::BinarySearchTree() : root(NULL) {

}

// Constructor
BinarySearchTree::BinarySearchTree(const int& rootItem) {
    root = new BinaryNode(rootItem, NULL, NULL, NULL);
}

// Constructor
BinarySearchTree::BinarySearchTree(const int& rootItem, BinarySearchTree& leftTree, BinarySearchTree& rightTree) {
    root = new BinaryNode(rootItem, NULL, NULL, NULL);
    attachLeftSubtree(leftTree);
    attachRightSubtree(rightTree);
}

// Destructor
BinarySearchTree::~BinarySearchTree() {
    destroyTree(root);
}


// Methods
void BinarySearchTree::destroyTree(BinaryNode *& treePtr) {

    if (treePtr != NULL) {
        destroyTree(treePtr->leftChildPtr);
        destroyTree(treePtr->rightChildPtr);
        delete treePtr;
        treePtr = NULL;
    }
}


void BinarySearchTree::attachLeftSubtree(BinarySearchTree& leftTree) {
    // Assertion: nonempty tree; no left child
    if (!isEmpty() && (root->getLeftChildPtr() == NULL)) {
        root->setLeftChildPtr(leftTree.root);
        leftTree.root = NULL;
    }
}


void BinarySearchTree::attachRightSubtree(BinarySearchTree& rightTree) {
    if (!isEmpty() && (root->getRightChildPtr() == NULL)) {
        root->setRightChildPtr(rightTree.root);
        rightTree.root = NULL;
    }
}



// IS EMPTY FUNCTION
bool BinarySearchTree::isEmpty() const{
    return (root == NULL);
}

// GET HEIGHT FUNCTION
int BinarySearchTree::getHeight() const{
    return getHeightHelper( root );
}

int BinarySearchTree::getHeightHelper(BinaryNode* subTreePtr) const
{
    if (subTreePtr == NULL) {
        return 0;
    }
    else {
        return max(getHeightHelper(subTreePtr->getRightChildPtr()),
                   getHeightHelper(subTreePtr->getLeftChildPtr())) + 1;
    }
}


// GET NUMBER OF NODES FUNCTION
int BinarySearchTree::getNumberOfNodes() const {
    return getNumberOfNodesHelper(root);
}

int BinarySearchTree::getNumberOfNodesHelper(BinaryNode *subTreePtr) const {
    if( subTreePtr == NULL ) {
        return 0;
    }
    else {
        return ( getNumberOfNodesHelper(subTreePtr->getRightChildPtr())
                 + getNumberOfNodesHelper(subTreePtr->getLeftChildPtr()) + 1 );
    }
}


// ADD FUNCTION
bool BinarySearchTree::add(int newEntry) {
    if( newEntry <= 0 ) {
        return false;
    }
    return addHelper( root, newEntry, NULL );
}

bool BinarySearchTree::addHelper(BinaryNode* &subTreePtr, int newEntry, BinaryNode* parentPtr) {
    if( subTreePtr == NULL ) {
        subTreePtr = new BinaryNode(newEntry, NULL, NULL, parentPtr);
        //adjustSizeUp( subTreePtr );
        return true;
    }
    else if (newEntry < subTreePtr->getItem()) {
        addHelper(subTreePtr->leftChildPtr, newEntry, subTreePtr);
    }
    else {
        addHelper(subTreePtr->rightChildPtr, newEntry, subTreePtr);
    }
    return false;
}

void BinarySearchTree::adjustSizeUp(BinaryNode* &childPtr) {

    childPtr = childPtr->getParentPtr();

    while( childPtr->getParentPtr() != NULL ){
        childPtr->incrementSize();
        childPtr = childPtr->getParentPtr();
    }
}

void BinarySearchTree::adjustSizeDown(BinaryNode* &childPtr) {

    childPtr = childPtr->getParentPtr();

    while( childPtr->getParentPtr() != NULL ){
        childPtr->decrementSize();
        childPtr = childPtr->getParentPtr();
    }
}


// CONTAINS FUNCTION
bool BinarySearchTree::contains(int anEntry) {
    if( anEntry <= 0 ) {
        return false;
    }
    return containsHelper( root, anEntry );
}

bool BinarySearchTree::containsHelper(BinaryNode* &treePtr, int anEntry) {
    if( treePtr == NULL ) {
        return false;
    }
    if( treePtr->getItem() == anEntry ){
        return true;
    }
    if (anEntry < treePtr->getItem()) {
        return containsHelper(treePtr->leftChildPtr, anEntry);
    }
    else {
        return containsHelper(treePtr->rightChildPtr, anEntry);
    }
    return false;
}





// REMOVE FUNCTION
bool BinarySearchTree::remove(int anEntry) {
    return removeHelper( root, anEntry );
}


bool BinarySearchTree::removeHelper(BinaryNode *&delNode, int anEntry) {
    if( anEntry <= 0 ) {
        return false;
    }
    if( root == NULL ) {
        return false;
    }
    if( root->getItem() == anEntry ){
        deleteNode( root );
        return true;
    }
    else if (anEntry < root->getItem()) {
        removeHelper(root->leftChildPtr, anEntry);
    }
    else {
        removeHelper(root->rightChildPtr, anEntry);
    }
    return false;
}


void BinarySearchTree::deleteNode(BinaryNode* &nodePtr) {
    BinaryNode *delPtr;
    int replacementItem;

    // (1)  Test for a leaf
    if ( (nodePtr->getLeftChildPtr() == NULL) && (nodePtr->getRightChildPtr() == NULL) ) {
        //adjustSizeDown(nodePtr);
        nodePtr->setParentPtr( NULL );
        delete nodePtr;
        nodePtr = NULL;
    }

        // (2)  Test for no left child
    else if (nodePtr->leftChildPtr == NULL){
        nodePtr->getRightChildPtr()->setParentPtr(nodePtr->getParentPtr());
        delPtr = nodePtr;
        //adjustSizeDown(nodePtr);
        nodePtr = nodePtr->getRightChildPtr();
        delPtr->setParentPtr(NULL);
        delPtr->setRightChildPtr(NULL);
        delete delPtr;
    }
        // (3)  Test for no right child
    else if (nodePtr->rightChildPtr == NULL) {
        nodePtr->getLeftChildPtr()->setParentPtr(nodePtr->getParentPtr());
        delPtr = nodePtr;
        //adjustSizeDown(nodePtr);
        nodePtr = nodePtr->getLeftChildPtr();
        delPtr->setParentPtr(NULL);
        delPtr->setLeftChildPtr(NULL);
        delete delPtr;
    }
        // (4)  There are two children:
        //      Retrieve and delete the inorder successor
    else {
        processLeftmost( nodePtr->rightChildPtr, replacementItem);
        nodePtr->setItem( replacementItem );
    }
}


void BinarySearchTree::processLeftmost(BinaryNode *&nodePtr, int& replacementItem){

    if (nodePtr->getLeftChildPtr() == NULL) {
        replacementItem = nodePtr->getItem();
        BinaryNode *delPtr = nodePtr;
        //adjustSizeDown(nodePtr);
        nodePtr = nodePtr->getRightChildPtr();
        nodePtr->setParentPtr(delPtr->getParentPtr());
        delPtr->setRightChildPtr(NULL); // defense
        delPtr->setParentPtr( NULL );
        delete delPtr;
    }
    else
        processLeftmost(nodePtr->leftChildPtr, replacementItem);
}



// INORDER TRAVERSAL FUNCTION
void BinarySearchTree::inorderTraverse() {
    inorderHelper(root);
}

void BinarySearchTree::inorderHelper( BinaryNode* treePtr ) {
    if (treePtr != NULL) {
        inorderHelper(treePtr->getLeftChildPtr());
        cout << treePtr->getItem() << " " << endl;
        inorderHelper(treePtr->getRightChildPtr());
    }
}


// GET WIDTH FUNCTION
int BinarySearchTree::getWidth() {
    int curWidth;
    int maxWidth = 0;

    for( int i = 0; i < getHeight(); i++ ) {
        curWidth = getWidthHelper( root, i + 1 );
        if( curWidth > maxWidth ) {
            maxWidth = curWidth;
        }
    }
    return maxWidth;
}

int BinarySearchTree::getWidthHelper( BinaryNode* treePtr, int level ) {
    if( treePtr == NULL ) {
        return 0;
    }
    else if( level == 1 ) {
        return 1;
    }
    else {
        return ( getWidthHelper( treePtr->rightChildPtr, (level - 1)
                 + getWidthHelper( treePtr->leftChildPtr, (level - 1) )));
    }
}


int BinarySearchTree::count(int min, int max) {
    return countHelper( root, min, max );
}

int BinarySearchTree::countHelper( BinaryNode* subTreePtr, int min, int max) {

    if( subTreePtr == NULL ) {
        return 0;
    }

    if( subTreePtr->getItem() < min ) {
        return countHelper(subTreePtr->getRightChildPtr(), min, max);
    }
    else if( subTreePtr->getItem() > max ) {
        return countHelper(subTreePtr->getLeftChildPtr(), min, max);
    }
    else if( subTreePtr->getItem() >= min && subTreePtr->getItem() <= max ) {
        return ( countHelper(subTreePtr->getLeftChildPtr(), min, max)
                 + countHelper(subTreePtr->getRightChildPtr(), min, max) + 1 );
    }
}


int BinarySearchTree::select(int anEntry) {

    bool found = false;
    int index;

    index = selectHelper( anEntry, root, found );

    if( !found ){
        return -1;
    }
    return index;
}


int BinarySearchTree::selectHelper(int anEntry, BinaryNode *subTreePtr, bool &found ) {

    if( subTreePtr->getItem() == anEntry ) {
        found = true;
        return 0;
    }

    if( subTreePtr->getItem() > anEntry ) {
        return selectHelper( anEntry, root->getLeftChildPtr(), found );
    }
    if( subTreePtr->getItem() < anEntry ) {
        return 1 + getNumberOfNodesHelper(root->getLeftChildPtr()) + selectHelper( anEntry, root->getRightChildPtr(), found );
    }
}

//NON COMPLETE
int BinarySearchTree::successor(int anEntry) {

    return -1;

}







