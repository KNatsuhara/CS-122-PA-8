#include "header.h"


/*
Function: printArray(int arr[], int n)
Date Modified: 4/17/2020
Description: This function will print out all the elements in the array
Return: Void
*/
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/*
Function: bucketSort(int arr[], int size) 
Date Modified: 4/17/2020
Description: This function will search through the entire array multiple times and place count how
many of the same integers are in the array and sort them into buckets. From there, the array will be reorgainzed
from least to greatest based on the count in the buckets.
Return: Void
*/
void bucketSort(int arr[], int size) 
{
    int count[100] = {0}; //Initializes count array of 100 elements

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (j == arr[i]) //If arr has an element of that index add 1 to the count array
            {
                count[j]++;
            }
        }
    }
    int index = 0;
    for (int i = 0; i < 100; i++)
    {
       while (count[i] != 0)
       {
            arr[index++] = i; //concatenating the count array to arr
            count[i]--;
       }
    }
}