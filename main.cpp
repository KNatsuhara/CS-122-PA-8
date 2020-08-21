#include "header.h"

/**********************************************************
Programmer: Koji Natsuhara
Class: CptS 122, Spring 2020, Lab Section 3
Programming Assignment: Programming Assignment 8: Sorting Algorithms
Date: April 8, 2020
Description: This program will create a Bucket Sort Algorithm of a set of an array of 100 of intgers ranging from 0 to 99;
**********************************************************/

int main()
{
    srand(time(NULL));
    int bucket[100];

    for (int i = 0; i < 100; i++)
    {
        bucket[i] = rand() % 100;
    }
    int k = 100;
    cout << "UNORGANIZED ARRAY\n";
    printArray(bucket, k);

    bucketSort(bucket, k);
    cout << "ORGANIZED ARRAY\n";
    printArray(bucket, k);
}

//THE ORDER OF BUCKET SORT IS n^2