#include <iostream>
using namespace std;

double getMedian(int Array[], int size) //sort the array in an ascending order, if there is an even number of numbers, add up size/2 and (size/2)-1th indexed numbers in the array and divide by 2 to get the median
{                                       // if there is an odd number of numbers, median is size/2 indexed number in the array
    double median;                      // return median
    for (int i = 0; i < size; i++) //the idea for this for loop is from Stack Overflow
		for (int j = 0; j < size - i - 1; j++)
			if (Array[j] < Array[j + 1])
			{
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
    if (size%2 == 0)
    {
        median = ((double) Array[size/2] + (double) Array[(size/2)-1])/2.0;
    }
    else
    {
        median = (double) Array[size/2];
    }
    return median;
}

int getLargest(int Array[], int size) //create largest_so_far, itirate through the numbers in the array, if a number in the array is greater, largest_so_far becomes that number
{                                     //return largest_so_far
    int largest_so_far = Array[0];
    for (int i = 0; i<size; i++)
    {
        if (Array[i] > largest_so_far)
        {
            largest_so_far = Array[i];
        }
    }
    return largest_so_far;
}