/*
 * Title: Sorting and Algorithm Efficiency
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 03
 * Assignment: 01
 * Description: Implementation of the insertion sort, bubble sort, merge sort, and quick sort algorithms.
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "sorting.h"

using namespace std;

const int MAX_SIZE = 100000;

// methods

void performanceAnalysis(){

    // 1.1 Create random arrays.

    int* arr5k1 = new int[5000];
    int* arr5k2 = new int[5000];
    int* arr5k3 = new int[5000];
    int* arr5k4 = new int[5000];

    int* arr10k1 = new int[10000];
    int* arr10k2 = new int[10000];
    int* arr10k3 = new int[10000];
    int* arr10k4 = new int[10000];

    int* arr15k1 = new int[15000];
    int* arr15k2 = new int[15000];
    int* arr15k3 = new int[15000];
    int* arr15k4 = new int[15000];

    int* arr20k1 = new int[20000];
    int* arr20k2 = new int[20000];
    int* arr20k3 = new int[20000];
    int* arr20k4 = new int[20000];

    int* arr25k1 = new int[25000];
    int* arr25k2 = new int[25000];
    int* arr25k3 = new int[25000];
    int* arr25k4 = new int[25000];

    int* arr30k1 = new int[30000];
    int* arr30k2 = new int[30000];
    int* arr30k3 = new int[30000];
    int* arr30k4 = new int[30000];

    int* arr35k1 = new int[35000];
    int* arr35k2 = new int[35000];
    int* arr35k3 = new int[35000];
    int* arr35k4 = new int[35000];

    int* arr40k1 = new int[40000];
    int* arr40k2 = new int[40000];
    int* arr40k3 = new int[40000];
    int* arr40k4 = new int[40000];

    createRandomArrays( arr5k1, arr5k2, arr5k3, arr5k4, 5000 );
    createRandomArrays( arr10k1, arr10k2, arr10k3, arr10k4, 10000 );
    createRandomArrays( arr15k1, arr15k2, arr15k3, arr15k4, 15000 );
    createRandomArrays( arr20k1, arr20k2, arr20k3, arr20k4, 20000 );
    createRandomArrays( arr25k1, arr25k2, arr25k3, arr25k4, 25000 );
    createRandomArrays( arr30k1, arr30k2, arr30k3, arr30k4, 30000 );
    createRandomArrays( arr35k1, arr35k2, arr35k3, arr35k4, 35000 );
    createRandomArrays( arr40k1, arr40k2, arr40k3, arr40k4, 40000 );


    // 1.2 Create almost sorted arrays.

    int* arr5k1Sort = new int[5000];
    int* arr5k2Sort = new int[5000];
    int* arr5k3Sort = new int[5000];
    int* arr5k4Sort = new int[5000];

    int* arr10k1Sort = new int[10000];
    int* arr10k2Sort = new int[10000];
    int* arr10k3Sort = new int[10000];
    int* arr10k4Sort = new int[10000];

    int* arr15k1Sort = new int[15000];
    int* arr15k2Sort = new int[15000];
    int* arr15k3Sort = new int[15000];
    int* arr15k4Sort = new int[15000];

    int* arr20k1Sort = new int[20000];
    int* arr20k2Sort = new int[20000];
    int* arr20k3Sort = new int[20000];
    int* arr20k4Sort = new int[20000];

    int* arr25k1Sort = new int[25000];
    int* arr25k2Sort = new int[25000];
    int* arr25k3Sort = new int[25000];
    int* arr25k4Sort = new int[25000];

    int* arr30k1Sort = new int[30000];
    int* arr30k2Sort = new int[30000];
    int* arr30k3Sort = new int[30000];
    int* arr30k4Sort = new int[30000];

    int* arr35k1Sort = new int[35000];
    int* arr35k2Sort = new int[35000];
    int* arr35k3Sort = new int[35000];
    int* arr35k4Sort = new int[35000];

    int* arr40k1Sort = new int[40000];
    int* arr40k2Sort = new int[40000];
    int* arr40k3Sort = new int[40000];
    int* arr40k4Sort = new int[40000];

    createAlmostSortedArrays( arr5k1Sort, arr5k2Sort, arr5k3Sort, arr5k4Sort, 5000 );
    createAlmostSortedArrays( arr10k1Sort, arr10k2Sort, arr10k3Sort, arr10k4Sort, 10000 );
    createAlmostSortedArrays( arr15k1Sort, arr15k2Sort, arr15k3Sort, arr15k4Sort, 15000 );
    createAlmostSortedArrays( arr20k1Sort, arr20k2Sort, arr20k3Sort, arr20k4Sort, 20000 );
    createAlmostSortedArrays( arr25k1Sort, arr25k2Sort, arr25k3Sort, arr25k4Sort, 25000 );
    createAlmostSortedArrays( arr30k1Sort, arr30k2Sort, arr30k3Sort, arr30k4Sort, 30000 );
    createAlmostSortedArrays( arr35k1Sort, arr35k2Sort, arr35k3Sort, arr35k4Sort, 35000 );
    createAlmostSortedArrays( arr40k1Sort, arr40k2Sort, arr40k3Sort, arr40k4Sort, 40000 );


    // 1.3 Create almost unsorted arrays.

    int* arr5k1UnSort = new int[5000];
    int* arr5k2UnSort = new int[5000];
    int* arr5k3UnSort = new int[5000];
    int* arr5k4UnSort = new int[5000];

    int* arr10k1UnSort = new int[10000];
    int* arr10k2UnSort = new int[10000];
    int* arr10k3UnSort = new int[10000];
    int* arr10k4UnSort = new int[10000];

    int* arr15k1UnSort = new int[15000];
    int* arr15k2UnSort = new int[15000];
    int* arr15k3UnSort = new int[15000];
    int* arr15k4UnSort = new int[15000];

    int* arr20k1UnSort = new int[20000];
    int* arr20k2UnSort = new int[20000];
    int* arr20k3UnSort = new int[20000];
    int* arr20k4UnSort = new int[20000];

    int* arr25k1UnSort = new int[25000];
    int* arr25k2UnSort = new int[25000];
    int* arr25k3UnSort = new int[25000];
    int* arr25k4UnSort = new int[25000];

    int* arr30k1UnSort = new int[30000];
    int* arr30k2UnSort = new int[30000];
    int* arr30k3UnSort = new int[30000];
    int* arr30k4UnSort = new int[30000];

    int* arr35k1UnSort = new int[35000];
    int* arr35k2UnSort = new int[35000];
    int* arr35k3UnSort = new int[35000];
    int* arr35k4UnSort = new int[35000];

    int* arr40k1UnSort = new int[40000];
    int* arr40k2UnSort = new int[40000];
    int* arr40k3UnSort = new int[40000];
    int* arr40k4UnSort = new int[40000];

    createAlmostUnsortedArrays( arr5k1UnSort, arr5k2UnSort, arr5k3UnSort, arr5k4UnSort, 5000 );
    createAlmostUnsortedArrays( arr10k1UnSort, arr10k2UnSort, arr10k3UnSort, arr10k4UnSort, 10000 );
    createAlmostUnsortedArrays( arr15k1UnSort, arr15k2UnSort, arr15k3UnSort, arr15k4UnSort, 15000 );
    createAlmostUnsortedArrays( arr20k1UnSort, arr20k2UnSort, arr20k3UnSort, arr20k4UnSort, 20000 );
    createAlmostUnsortedArrays( arr25k1UnSort, arr25k2UnSort, arr25k3UnSort, arr25k4UnSort, 25000 );
    createAlmostUnsortedArrays( arr30k1UnSort, arr30k2UnSort, arr30k3UnSort, arr30k4UnSort, 30000 );
    createAlmostUnsortedArrays( arr35k1UnSort, arr35k2UnSort, arr35k3UnSort, arr35k4UnSort, 35000 );
    createAlmostUnsortedArrays( arr40k1UnSort, arr40k2UnSort, arr40k3UnSort, arr40k4UnSort, 40000 );

    // 2.0 Initialize variables.
    int compCount = 0;
    int moveCount = 0;

    // 2.1 INSERTION SORT
    cout << "\n-----------------------------------------------------" << endl;
    cout << "ANALYSIS OF INSERTION SORT" << endl;

    // 2.1.1 Analyze insertion sort with random arrays.
    cout << "\nRandom Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    clock_t startTime = clock();
    insertionSort( arr5k1, 5000, compCount, moveCount );
    double duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr10k1, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr15k1, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr20k1, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr25k1, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr30k1, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr35k1, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr40k1, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;


    // 2.1.2 Analyze insertion sort with almost sorted arrays.
    cout << "\nAlmost Sorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr5k1Sort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr10k1Sort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr15k1Sort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr20k1Sort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr25k1Sort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr30k1Sort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr35k1Sort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr40k1Sort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;


    // 2.1.3 Analyze insertion sort with almost unsorted arrays.
    cout << "\nAlmost Unsorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr5k1UnSort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr10k1UnSort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr15k1UnSort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr20k1UnSort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr25k1UnSort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr30k1UnSort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr35k1UnSort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    insertionSort( arr40k1UnSort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;



    // 2.2 BUBBLE SORT
    cout << "\n-----------------------------------------------------" << endl;
    cout << "ANALYSIS OF BUBBLE SORT" << endl;

    // 2.2.1 Analyze bubble sort with random arrays.
    cout << "\nRandom Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr5k2, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr10k2, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr15k2, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr20k2, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr25k2, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr30k2, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr35k2, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr40k2, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;


    // 2.2.2 Analyze bubble sort with almost sorted arrays.
    cout << "\nAlmost Sorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr5k2Sort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr10k2Sort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr15k2Sort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr20k2Sort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr25k2Sort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr30k2Sort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr35k2Sort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr40k2Sort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;


    // 2.2.3 Analyze bubble sort with almost unsorted arrays.
    cout << "\nAlmost Unsorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr5k2UnSort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr10k2UnSort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr15k2UnSort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr20k2UnSort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr25k2UnSort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr30k2UnSort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr35k2UnSort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    bubbleSort( arr40k2UnSort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t" << moveCount << endl;



    // 2.3 MERGE SORT
    // 2.3.1 Analyze merge sort with random arrays.
    cout << "\n-----------------------------------------------------" << endl;
    cout << "ANALYSIS OF MERGE SORT" << endl;

    cout << "\nRandom Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr5k3, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr10k3, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr15k3, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr20k3, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr25k3, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr30k3, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr35k3, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr40k3, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;


    // 2.3.2 Analyze merge sort with almost sorted arrays.
    cout << "\nAlmost Sorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr5k3Sort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr10k3Sort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr15k3Sort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr20k3Sort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr25k3Sort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr30k3Sort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr35k3Sort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr40k3Sort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;


    // 2.3.3 Analyze merge sort with almost unsorted arrays.
    cout << "\nAlmost Unsorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr5k3UnSort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr10k3UnSort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr15k3UnSort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr20k3UnSort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr25k3UnSort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr30k3UnSort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr35k3UnSort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    mergeSort( arr40k3UnSort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;



    // 2.4 QUICK SORT
    // 2.4.1 Analyze quick sort with random arrays.
    cout << "\n-----------------------------------------------------" << endl;
    cout << "ANALYSIS OF QUICK SORT" << endl;

    cout << "\nRandom Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr5k4, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr10k4, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr15k4, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr20k4, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr25k4, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr30k4, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr35k4, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr40k4, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;


    // 2.4.2 Analyze quick sort with almost sorted arrays.
    cout << "\nAlmost Sorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr5k4Sort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr10k4Sort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr15k4Sort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr20k4Sort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr25k4Sort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr30k4Sort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr35k4Sort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr40k4Sort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;


    // 2.4.3 Analyze quick sort with almost unsorted arrays.
    cout << "\nAlmost Unsorted Arrays:" << endl;
    cout << "Array Size\t\tElapsed Time\tcompCount\t\tmoveCount" << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr5k4UnSort, 5000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "5000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr10k4UnSort, 10000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "10000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr15k4UnSort, 15000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "15000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr20k4UnSort, 20000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "20000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr25k4UnSort, 25000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "25000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr30k4UnSort, 30000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "30000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr35k4UnSort, 35000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "35000\t\t\t" << duration << "ms\t\t\t" << compCount << "\t\t\t" << moveCount << endl;

    compCount = 0;
    moveCount = 0;
    startTime = clock();
    quickSort( arr40k4UnSort, 40000, compCount, moveCount );
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "40000\t\t\t" << duration << "ms\t\t" << compCount << "\t\t\t" << moveCount << endl;



    // 3. Deallocate arrays.
    delete[] arr5k1;
    delete[] arr10k1;
    delete[] arr15k1;
    delete[] arr20k1;
    delete[] arr25k1;
    delete[] arr30k1;
    delete[] arr35k1;
    delete[] arr40k1;

    delete[] arr5k2;
    delete[] arr10k2;
    delete[] arr15k2;
    delete[] arr20k2;
    delete[] arr25k2;
    delete[] arr30k2;
    delete[] arr35k2;
    delete[] arr40k2;

    delete[] arr5k3;
    delete[] arr10k3;
    delete[] arr15k3;
    delete[] arr20k3;
    delete[] arr25k3;
    delete[] arr30k3;
    delete[] arr35k3;
    delete[] arr40k3;

    delete[] arr5k4;
    delete[] arr10k4;
    delete[] arr15k4;
    delete[] arr20k4;
    delete[] arr25k4;
    delete[] arr30k4;
    delete[] arr35k4;
    delete[] arr40k4;


    delete[] arr5k1Sort;
    delete[] arr10k1Sort;
    delete[] arr15k1Sort;
    delete[] arr20k1Sort;
    delete[] arr25k1Sort;
    delete[] arr30k1Sort;
    delete[] arr35k1Sort;
    delete[] arr40k1Sort;

    delete[] arr5k2Sort;
    delete[] arr10k2Sort;
    delete[] arr15k2Sort;
    delete[] arr20k2Sort;
    delete[] arr25k2Sort;
    delete[] arr30k2Sort;
    delete[] arr35k2Sort;
    delete[] arr40k2Sort;

    delete[] arr5k3Sort;
    delete[] arr10k3Sort;
    delete[] arr15k3Sort;
    delete[] arr20k3Sort;
    delete[] arr25k3Sort;
    delete[] arr30k3Sort;
    delete[] arr35k3Sort;
    delete[] arr40k3Sort;

    delete[] arr5k4Sort;
    delete[] arr10k4Sort;
    delete[] arr15k4Sort;
    delete[] arr20k4Sort;
    delete[] arr25k4Sort;
    delete[] arr30k4Sort;
    delete[] arr35k4Sort;
    delete[] arr40k4Sort;


    delete[] arr5k1UnSort;
    delete[] arr10k1UnSort;
    delete[] arr15k1UnSort;
    delete[] arr20k1UnSort;
    delete[] arr25k1UnSort;
    delete[] arr30k1UnSort;
    delete[] arr35k1UnSort;
    delete[] arr40k1UnSort;

    delete[] arr5k2UnSort;
    delete[] arr10k2UnSort;
    delete[] arr15k2UnSort;
    delete[] arr20k2UnSort;
    delete[] arr25k2UnSort;
    delete[] arr30k2UnSort;
    delete[] arr35k2UnSort;
    delete[] arr40k2UnSort;

    delete[] arr5k3UnSort;
    delete[] arr10k3UnSort;
    delete[] arr15k3UnSort;
    delete[] arr20k3UnSort;
    delete[] arr25k3UnSort;
    delete[] arr30k3UnSort;
    delete[] arr35k3UnSort;
    delete[] arr40k3UnSort;

    delete[] arr5k4UnSort;
    delete[] arr10k4UnSort;
    delete[] arr15k4UnSort;
    delete[] arr20k4UnSort;
    delete[] arr25k4UnSort;
    delete[] arr30k4UnSort;
    delete[] arr35k4UnSort;
    delete[] arr40k4UnSort;

}


void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}


void insertionSort(int *arr, const int size, int &compCount, int &moveCount)
{
    for (int unsorted = 1; unsorted < size; ++unsorted)
    {
        int nextItem = arr[unsorted];
        moveCount++;
        int loc = unsorted;

        for (  ;(loc > 0) && (arr[loc-1] > nextItem); --loc) {
            compCount++;
            arr[loc] = arr[loc - 1];
            moveCount++;
        }
        if ( loc > 1 ) {
            compCount++;
        }
        arr[loc] = nextItem;
        moveCount++;
    }
}


void bubbleSort(int *arr, const int size, int &compCount, int &moveCount)
{
    bool sorted = false;

    for (int pass = 1; (pass < size) && !sorted; ++pass)
    {
        sorted = true;
        for (int index = 0; index < size-pass; ++index)
        {
            int nextIndex = index + 1;
            if (arr[index] > arr[nextIndex])
            {
                swap(arr[index], arr[nextIndex]);
                moveCount = moveCount + 3;
                sorted = false;       // signal exchange
            }
            compCount++;
        }
    }
}


void mergeSort(int *arr, const int size, int &compCount, int &moveCount)
{
    mergeSortHelper(arr, 0, (size - 1), compCount, moveCount );
}


void mergeSortHelper(int *arr, int first, int last, int &compCount, int &moveCount)
{
    if (first < last)
    {
        int mid = (first + last) / 2; 	// index of midpoint

        mergeSortHelper(arr, first, mid, compCount, moveCount );

        mergeSortHelper(arr, (mid + 1), last, compCount, moveCount );

        // merge the two halves
        merge(arr, first, mid, last, compCount, moveCount);
    }
}

void merge( int theArray[], int first, int mid, int last, int &compCount, int &moveCount)
{
    int tempArray[MAX_SIZE];    // temporary array

    int first1 = first;      // beginning of first subarray
    int last1 = mid;         // end of first subarray
    int first2 = mid + 1;    // beginning of second subarray
    int last2 = last;        // end of second subarray
    int index = first1;      // next available location in tempArray

    for ( ; (first1 <= last1) && (first2 <= last2); ++index) {
        if (theArray[first1] < theArray[first2]) {
            tempArray[index] = theArray[first1];
            ++first1;
        } else {
            tempArray[index] = theArray[first2];
            ++first2;
        }
        moveCount++;
        compCount++;
    }

    // finish off the first subarray, if necessary
    for (; first1 <= last1; ++first1, ++index){
        tempArray[index] = theArray[first1];
        moveCount++;
    }


    // finish off the second subarray, if necessary
    for (; first2 <= last2; ++first2, ++index){
        tempArray[index] = theArray[first2];
        moveCount++;
    }

    // copy the result back into the original array
    for (index = first; index <= last; ++index){
        theArray[index] = tempArray[index];
        moveCount++;
    }
}


void quickSort(int *arr, const int size, int &compCount, int &moveCount)
{
    quickSortHelper( arr, 0, (size - 1), compCount, moveCount);
}


void quickSortHelper( int *arr, int first, int last, int &compCount, int &moveCount )
{
    // Precondition: theArray[first..last] is an array.
    // Postcondition: theArray[first..last] is sorted.

    int pivotIndex;

    if (first < last)
    {
        // create the partition: S1, pivot, S2
        partition(arr, first, last, pivotIndex, compCount, moveCount);

        // sort regions S1 and S2
        quickSortHelper(arr, first, pivotIndex - 1, compCount, moveCount);
        quickSortHelper(arr, pivotIndex + 1, last, compCount, moveCount);
    }
}


void partition( int *arr, int first, int last, int &pivotIndex, int &compCount, int &moveCount )
{
        // Precondition: theArray[first..last] is an array; first <= last.
        // Postcondition: Partitions theArray[first..last] such that:
        //   S1 = theArray[first..pivotIndex-1] < pivot
        //   theArray[pivotIndex] == pivot
        //   S2 = theArray[pivotIndex+1..last] >= pivot

        // place pivot in theArray[first]
        // choosePivot(arr, first, last);

        int pivot = arr[first];       // copy pivot
        moveCount++;
        // initially, everything but pivot is in unknown
        int lastS1 = first;           // index of last item in S1
        int firstUnknown = first + 1; // index of first item in unknown

        // move one item at a time until unknown region is empty
        for (  ; firstUnknown <= last; ++firstUnknown) {
            // Invariant: theArray[first+1..lastS1] < pivot
            //            theArray[lastS1+1..firstUnknown-1] >= pivot

            // move item from unknown to proper region
            if (arr[firstUnknown] < pivot) {  	// belongs to S1
                ++lastS1;
                swap(arr[firstUnknown], arr[lastS1]);
                moveCount = moveCount + 3;
            }	// else belongs to S2
            compCount++;
        }
        // place pivot in proper position and mark its location
        swap(arr[first], arr[lastS1]);
        moveCount = moveCount + 3;
        pivotIndex = lastS1;
}


    void displayArray(const int *arr, const int size)
{
    for( int i = 0; i < size; i++ ) {
        printf("%d\t", arr[i]);
    }
}


void createRandomArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size)
{
    srand(time(NULL));

    const int MAX = 1000;

    for( int i = 0; i < size; i++ )
    {
        int num = rand() % MAX;
        arr1[ i ] = num;

        //num = rand() % MAX;
        arr2[ i ] = num;

        //num = rand() % MAX;
        arr3[ i ] = num;

        //num = rand() % MAX;
        arr4[ i ] = num;
    }
}


void createAlmostSortedArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size)
{
    for( int i = 0; i < size; i++ )
    {
        arr1[ i ] = i;
        arr2[ i ] = i;
        arr3[ i ] = i;
        arr4[ i ] = i;
    }

    srand(time(0));
    for( int i = 0; i < size; i = i + 20 ) {

        int index1 = rand() % size;
        int index2 = rand() % size;

        swap(arr1[index1], arr1[index2]);
        swap(arr2[index1], arr2[index2]);
        swap(arr3[index1], arr3[index2]);
        swap(arr4[index1], arr4[index2]);
    }
}


void createAlmostUnsortedArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size){

    for( int i = 0; i < size; i++ )
    {
        arr1[ size - 1 - i ] = i;
        arr2[ size - 1 - i ] = i;
        arr3[ size - 1 - i ] = i;
        arr4[ size - 1 - i ] = i;
    }

    srand(time(0));
    for( int i = 0; i < size; i = i + 20 ) {

        int index1 = rand() % size;
        int index2 = rand() % size;

        swap(arr1[index1], arr1[index2]);
        swap(arr2[index1], arr2[index2]);
        swap(arr3[index1], arr3[index2]);
        swap(arr4[index1], arr4[index2]);
    }
}


