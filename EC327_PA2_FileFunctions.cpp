#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
using namespace std;

void WriteRandomData(int N, int M, const char *filename) //open the file, write N number of numbers in range 0,M to the file
{
    srand(time(NULL));
    ofstream file;
    file.open(filename);
    for(; N>0; N--)
    {
        int random_int =  rand() % M;
        file << random_int << endl;
    }
    return;
}

void ReadData(const char *filename, int &size, int myArray[]) //open the file, add the numbers to myArray and calculate the size of the array while doing so
{
    ifstream file;
    file.open(filename);
    int number;
    int counter = 0;
    while (file >> number)
    {
        size += 1;
        myArray[size-1] = number;
    }
    return;
}
