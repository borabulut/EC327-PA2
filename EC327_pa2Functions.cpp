#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <time.h> 
#include <ctime>
using namespace std;
extern const int ENTRIES;

void initialize() //print out the intro to the program
{
    cout << "EC327: Introduction to Software Engineering\nFall 2021\nProgramming Assignment 2" << endl;
    cout << "Value of entries is: " << ENTRIES << endl;
    return;
}

bool checkCode(char c) //check if the character is valid
{
    if (c == 'F' || c == 'f' || c == 'B' || c == 'b' || c == 'R' || c == 'r' || c == 'U' || c == 'u' ||  c == 'C' || c == 'c' || c == 'E' || c == 'e' || c == 'K' || c == 'k' || c == 'S' || c == 's' || c == 'N' || c == 'n' || c == 'X' || c == 'x' || c == 'L' || c == 'l' || c == 'Y' || c == 'y' || c == 'D' || c == 'd' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'Q' || c == 'q')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int factorial(int n) //recursive function to return the factorial of a number
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int fibonacci(int n) //recursive function to return the fibonacci at a given index
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

double findSqrtValue(double n) //return the square root of a number
{
    return sqrt(n);
}

double areaSquare(double n) //return the area of a square with side n
{
    return n * n;
}

double areaCircle(double n) //return the area of a circle with radius n
{
    return 3.1415926535 * n * n;
}

double naturalLog(double n) //return the natural log of n
{
    return log(n);
}

int findNextEvenValue(int n) //if next integer is even, return next integer, else, return the next integer of the next integer
{
    if ((n+1)%2 == 0)
    {
        return (n+1);
    }
    else
    {
        return (n+2);
    }
}

int findNextOddValue(int n) //if next integer is odd, return next integer, else, return the next integer of the next integer
{
    if ((n+1)%2 == 1)
    {
        return (n+1);
    }
    else
    {
        return (n+2);
    }
}

double lucky(double n) //return a random number based on system time and argument
{
    srand(time(NULL));
    n = (rand()%int(n));
    return n;
}

double doMath(double n, char c) //calculate sin, cos, exp of n based on the character
{
    if (c == 's' || c == 'S')
    {
        n = sin(n*3.141592653589793238/180);
        return n;
    }
    else if (c == 'n' || c == 'N')
    {
        n = cos(n*3.141592653589793238/180);
        return n;
    }
    else if (c == 'x' || c == 'X')
    {
        n = exp(n);
        return n;
    }
    return 0;
}

double findNyanCatValue(double n) //do the nyancat operation on n
{
    return (pow(4*n,n)+n+10);
}

void writeDataToFile(const char * file) //open a file, write the user input on the file and display it on the console until user inputs the quit command
{
    ofstream outStream;
    outStream.open(file);
    while(true)
    {
        string input;
        cin >> input;
        if (input == "q" || input == "q")
        {
            outStream.close();
            break;
        }
        outStream << input << endl;
        cout << input << endl;
    }
    return;

}

void readDataFromFile(const char * file) //open a file, display the text on the console line by line
{
    string line;
    ifstream myfile (file);
    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }
    return;
}