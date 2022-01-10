#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "EC327_pa2Functions.h"
#include <cmath>
#include <time.h>
#include <ctime>

extern const int ENTRIES = 10;

int main()
{
    initialize(); //display the program intro
    char command_code;
    while (true) //run the program until user inputs the quit command
    {
        cout << "Please enter command code: "; //have the user enter the command code and check if it's valid, do operations according to the character inputted
        cin >> command_code;
        if (checkCode(command_code) == true)
        {
            if (command_code == 'F' || command_code == 'f')
            {
                int factorial_parameter;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> factorial_parameter;
                cout << factorial(factorial_parameter) << endl;
            }
            else if (command_code == 'B' || command_code == 'b')
            {
                int fibonacci_parameter;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> fibonacci_parameter;
                cout << fibonacci(fibonacci_parameter) << endl;
            }
            else if (command_code == 'R' || command_code == 'r')
            {
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << findSqrtValue(first) << endl;
                    first += delta;
                    counter += 1;
                }
                
            }
            else if (command_code == 'U' || command_code == 'u')
            {
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << areaSquare(first) << endl;
                    first += delta;
                    counter += 1;
                }
            }
            else if (command_code == 'C' || command_code == 'c')
            {
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << areaCircle(first) << endl;
                    first += delta;
                    counter += 1;
                }
            }
            else if (command_code == 'E' || command_code == 'e')
            {
                int first;
                int last;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                if (first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first < last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    if (findNextEvenValue(first) <= last)
                    {
                        cout << findNextEvenValue(first) << endl;
                    }
                    first += 2;
                    counter += 1;
                }
            }
            else if (command_code == 'K' || command_code == 'k')
            {
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << lucky(first) << endl;
                    first += delta;
                    counter += 1;
                }
            }
            else if (command_code == 'S' || command_code == 's' || command_code == 'N' || command_code == 'n' || command_code == 'X' || command_code == 'x')
            {
                char c = command_code;
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << doMath(first, c) << endl;
                    first += delta;
                    counter += 1;
                }
            }
            else if (command_code == 'L' || command_code == 'l')
            {
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << naturalLog(first) << endl;
                    first += delta;
                    counter += 1;
                }
            }
            else if (command_code == 'Y' || command_code == 'y')
            {
                double first;
                double last;
                double delta;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                cin >> delta;
                if (delta <= 0 || first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first <= last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    cout << findNyanCatValue(first) << endl;
                    first += delta;
                    counter += 1;
                }
            }
            else if (command_code == 'D' || command_code == 'd')
            {
                int first;
                int last;
                int counter = 0;
                cout << "Please enter command parameters: "; //have the user enter the parameter and execute the function with that parameter
                cin >> first;
                cin >> last;
                if (first > last) //check if computation is needed based on first, last, and delta
                {
                    cout << "No computation needed." << endl;
                }
                while (first < last) //execute the function as long as first is less than or equal to last, increase first by delta and finish doing operations if it has done ENTRIES number of operations
                {
                    if (counter == ENTRIES)
                    {
                        break;
                    }
                    if (findNextOddValue(first) <= last)
                    {
                        cout << findNextOddValue(first) << endl;
                    }
                    first += 2;
                    counter += 1;
                }
            }
            else if (command_code == 'I' || command_code == 'i')
            {
                char * file = new char[20];
                cout << "Enter the file name: " << endl; //have the user enter the file name and execute the function on that file
                cin >> file;
                readDataFromFile(file);
            }
            else if (command_code == 'O' || command_code == 'o')
            {
                char * file = new char[20];
                cout << "Enter the file name: " << endl; //have the user enter the file name and execute the function on that file
                cin >> file;
                writeDataToFile(file);
            }
            else if (command_code == 'Q' || command_code == 'q') //if user inputs the quit command, terminate the program
            {
                break;
            }
        }
        else
        {
            cout << "Invalid command code" << endl; //if it's an invalid command code, display an error message
        }    
    }
    return 0; //terminate by returning 0
}