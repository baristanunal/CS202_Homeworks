/*
 * Title: Sorting and Algorithm Efficiency
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 03
 * Assignment: 01
 * Description: Implementation of the insertion sort, bubble sort, merge sort, and quick sort algorithms.
 */

#include <iostream>
#include "sorting.h"

using namespace std;

int main() {

    const int SIZE = 16;
    int compCount = 0;
    int moveCount = 0;

    int sampleArray1[16] = {9, 6, 7, 16, 18, 5, 2, 12, 20, 1, 16, 17, 4, 11, 13, 8};
    int sampleArray2[16] = {9, 6, 7, 16, 18, 5, 2, 12, 20, 1, 16, 17, 4, 11, 13, 8};
    int sampleArray3[16] = {9, 6, 7, 16, 18, 5, 2, 12, 20, 1, 16, 17, 4, 11, 13, 8};
    int sampleArray4[16] = {9, 6, 7, 16, 18, 5, 2, 12, 20, 1, 16, 17, 4, 11, 13, 8};

    int* arr1 = new int[SIZE];
    int* arr2 = new int[SIZE];
    int* arr3 = new int[SIZE];
    int* arr4 = new int[SIZE];


    insertionSort( sampleArray1, SIZE, compCount, moveCount );
    cout << "\n\nINSERTION SORT: \ncompCount: " << compCount << " | moveCount: " << moveCount << endl;
    compCount = 0;
    moveCount = 0;
    displayArray( sampleArray1, SIZE );

    bubbleSort( sampleArray2, SIZE, compCount, moveCount );
    cout << "\n\nBUBBLE SORT: \ncompCount: " << compCount << " | moveCount: " << moveCount << endl;
    compCount = 0;
    moveCount = 0;
    displayArray( sampleArray2, SIZE );

    mergeSort( sampleArray3, SIZE, compCount, moveCount );
    cout << "\n\nMERGE SORT: \ncompCount: " << compCount << " | moveCount: " << moveCount << endl;
    compCount = 0;
    moveCount = 0;
    displayArray( sampleArray3, SIZE );

    quickSort( sampleArray4, SIZE, compCount, moveCount );
    cout << "\n\nQUICK SORT: \ncompCount: " << compCount << " | moveCount: " << moveCount << endl;
    compCount = 0;
    moveCount = 0;
    displayArray( sampleArray4, SIZE );

    performanceAnalysis();

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;

    return 0;
}
