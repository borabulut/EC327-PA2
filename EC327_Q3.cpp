#include <iostream>
#include <string>
using namespace std;


void PrintRhombus(int n)
{
    if (n==1) //display 1 if n is 1
    {   
        cout << n << endl;
    }
    else
    { 
        PrintRhombus(n-1); //call recursive function
        for (int i = 1; i <= n; i++) //display numbers from 1 to n with spaces in between
        {
            cout << i << " ";
        }
        for (int i = n-1; i > 0; i--) //display numbers from n-1 to 1 with spaces in between
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return;
}


int main()
{
    int n;
    cout << "Enter a number [1-9]: "; //have the user input a number, if the number is valid, run the function, else print error statement
    cin >> n;
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9)
    {
        PrintRhombus(n);
    }
    else
    {
        cout << "Error!" << endl;
    }
    return 0; //terminate the program by returning 0
}