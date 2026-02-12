// cpp-first-projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello Wor ld!\n";
    std::cout << "I meant Hello World!\n";
	std::cout << "I am learning C++.\n";
    //learning inputs
    //Variable Setup : You'll need one variable to hold the message (a string) and another to hold the shift amount (a whole number).
    //  Int variable and a variable  to hold your string
    int shiftBy;
    string shiftMessage;
    //Ask the User : Print a message asking for the text.Use the special "getline" command so spaces don't break your program.
	cout << "Enter a message to shift: "; 
    cin >> shiftMessage;
    cout << "Enter a shift number: ";
    cin >> shiftBy;
	for (int i = 0; i < shiftMessage.length(); i++) { 
        char c = shiftMessage[i];
        if ( c == ' ' or  c == '!') {
            continue;
        }
        else {

			c = c + shiftBy; 
            shiftMessage[i] = c;
            if (c  > 122) {
				 c = c - 26;
            }
            shiftMessage[i] = c;
        }
    } 
    cout << "Shifted message: " << shiftMessage << endl;
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
