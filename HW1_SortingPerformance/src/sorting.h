/*
 * Title: Sorting and Algorithm Efficiency
 * Author: Barış Tan Ünal
 * ID: 22003617
 * Section: 03
 * Assignment: 01
 * Description: Implementation of the insertion sort, bubble sort, merge sort, and quick sort algorithms.
 */

#ifndef HOMEWORK1_SORTING_H
#define HOMEWORK1_SORTING_H

#include <iostream>


void displayArray(const int *arr, const int size);
void createRandomArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size);
void createAlmostSortedArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size);
void createAlmostUnsortedArrays(int *&arr1, int *&arr2, int *&arr3, int *&arr4, const int size);

void insertionSort(int *arr, const int size, int &compCount, int &moveCount);
int indexOfLargest( const int theArray[], int size );

void selectionSort(int *arr, const int size, int &compCount, int &moveCount);

void bubbleSort(int *arr, const int size, int &compCount, int &moveCount);

void mergeSort(int *arr, const int size, int &compCount, int &moveCount);
void mergeSortHelper(int *arr, int first, int last, int &compCount, int &moveCount);
void merge( int arr[], int first, int mid, int last, int &compCount, int &moveCount );

void quickSort(int *arr, const int size, int &compCount, int &moveCount);
void quickSortHelper( int *arr, int first, int last, int &compCount, int &moveCount );
void partition( int *arr, int first, int last, int &pivotIndex, int &compCount, int &moveCount );

void swap( int &x, int &y );

void performanceAnalysis();

class Sorting {

};


#endif //HOMEWORK1_SORTING_H
