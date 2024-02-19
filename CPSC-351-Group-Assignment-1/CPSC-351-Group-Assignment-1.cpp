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
DWORD WINAPI executeCommand(LPVOID secondParameter);


int main()
{
    // List of supported commands
    // cosnt becasue it will not change
    const vector<string> SUPPORTED_COMMANDS =
    { "dir", "help", "vol", "path", "tasklist", "notepad", "echo", "color", "ping" };

    cout << "Wellcom to myShell\n";

    while (true)
    {
        // TODO
        // Do stuff like initialize the input sring
        // check if the input is "exit" or "quit" and break
        
        break;

        // TODO
        // if statement that checks if the command is supported
        // if it is, create a new thread to execute the command
        // if not, display an error message, unsopported command...
        // 
        //   
        //     HANDLE thread = CreateThread(NULL, 0, ExecuteCommand, (LPVOID)&input, 0, NULL);
        //     if (thread) 
        //     {
        //       WaitForSingleObject(thread, INFINITE);
        //       CloseHandle(thread);
        //     }
        //     else
        //     {
        //       message that it was not able to create a thread
        //     }

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


