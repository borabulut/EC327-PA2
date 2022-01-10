#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
#include "EC327_PA2_FileFunctions.h"
#include "EC327_PA2_Statistics.h"
using namespace std;

int * DoubleAndReverse (int *list, int size) //create an array double the size of the original array, first carry the elements on the list array to final_array, then add the elements in reversed order to final_array, return final_array
{
    int *final_array = new int[size*2];
    for(int i = 0; i < size; i++)
    {
        final_array[i] = list[i];
    }
    int counter = 0;
    while (counter < size)
    {
        final_array[counter+size] = list[size-counter-1];
        counter += 1;
    }
    return final_array;
}

int main()
{
    cout << "Writing file: data.txt" << endl;
    ofstream outfile ("data.txt"); //create data.txt
    int myArray[1000]; //create an array of size 1000
    int N = 10; //set N = 10
    int M = 100; //set M = 100
    WriteRandomData(N, M, "data.txt"); //write N random integers in range 0,M to data.txt
    int size = 0;
    cout << "Reading file: data.txt" << endl;
    ReadData("data.txt", size, myArray); //read data.txt, put the numbers into myArray, and calculate the size of myArray
    cout << "Array size is: " << size << endl;
    int *doubled_reversed = DoubleAndReverse(myArray, size); //double an reverse the array and assign it to *doubled_reversed
    cout << "Doubled and reversed is [";
    for (int i = 0; i < size*2; i++) //display the doubled and reversed array
    {
        cout << doubled_reversed[i];
        if (i == size*2-1)
            break;
        cout << ' ';
    }
    cout << "]" << endl;
    cout << "Median is: " << getMedian(doubled_reversed, size) << endl; //display the median of doubled and reversed array
    cout << "Largest is: " << getLargest(doubled_reversed, size) << endl; //display the largest value of doubled and reversed array
    return 0;
}