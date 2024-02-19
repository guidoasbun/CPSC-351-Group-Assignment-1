// CPSC-351-Group-Assignment-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

// Function declarations
void displayMenu(const vector<string>& commands);
bool isCommandSupported(const vector<string>& commandsList, const string& commandInput);
DWORD WINAPI executeCommand(LPVOID lpParam);


int main()
{
    // List of supported commands
    // cosnt becasue it will not change
    const vector<string> SUPPORTED_COMMANDS =
    { "dir", "help", "vol", "path", "tasklist", "notepad", "echo", "color", "ping" };

    while (true)
    {
        // Do stuff like initialize the input sring
        // check if the input is "exit" or "quit" and break
        //
        
        // if(isCommandSupported(*****))
        // {
   
        // }
   



    }

}

// Function Definitions
// TODO
void displayMenu(const vector<string>& commands)
{



}

// TODO
bool isCommandSupported(const vector<string>& commandsList, const string& commandInput)
{



	return false;
}

// On chapter 4 of the book, how to use the WINAPI
// COMPLETE
DWORD WINAPI executeCommand(LPVOID secondParameter)
{
    string command = *(string*)secondParameter;
    system(command.c_str());
    return 0;
}


