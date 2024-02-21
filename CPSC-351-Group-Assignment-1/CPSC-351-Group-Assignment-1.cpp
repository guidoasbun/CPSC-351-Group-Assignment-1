// CPSC-351-Group-Assignment-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>


using namespace std;
namespace fs = filesystem;


// Function declarations
string getInfo();
string lowerCase(string UI);
void displayMenu(const vector<string>& commands);
bool isCommandSupported(const vector<string>& commandsList, const string& commandInput);
DWORD WINAPI executeCommand(LPVOID secondParameter);


int main()
{
    // List of supported commands
    // cosnt becasue it will not change
    string UserInfo = getInfo();
    const vector<string> SUPPORTED_COMMANDS =
    { "dir", "help", "vol", "path", "tasklist", "notepad", "echo", "color", "ping" };

    cout << "Wellcome to myShell\n";

    while (true)
    {
        // TODO
        // Do stuff like initialize the input sring
        // check if the input is "exit" or "quit" and break
        cout << UserInfo << " ";
        char userInput[100];
        fgets(userInput, sizeof(userInput), stdin);
        string stringInput(userInput);

        if (stringInput ==  "exit" || stringInput == "quit") {
            break;     
        }

        // TODO
        // if statement that checks if the command is supported
        // if it is, create a new thread to execute the command
        // if not, display an error message, unsopported command...
        // 
        //   
        //HANDLE thread = CreateThread(NULL, 0, ExecuteCommand, (LPVOID)&input, 0, NULL);
        //    if (thread) 
        //     {
        //       WaitForSingleObject(thread, INFINITE);
        //       CloseHandle(thread);
        //     }
        //     else
        //     {
        //       message that it was not able to create a thread
        //     }
        if (isCommandSupported(SUPPORTED_COMMANDS, stringInput)) {
            HANDLE thread = CreateThread(NULL, 0, executeCommand, (LPVOID)&input, 0, NULL;
            if (thread) {
                WaitForSingleObject(thread, INFINITE);
                CloseHandle(thread);
            } else {
                cout << "Unable to create a thread.\n";    
            }
        } else {
            cout << "Error, unsupported command.\n";
        }
    }
    return 0;
}

// Function Definitions
// TODO
void displayMenu(const vector<string>& commands)
{



}

// TODO
bool isCommandSupported(const vector<string>& commandsList, const string& commandInput)
{
    string lowerCaseInput = lowerCase(commandInput);
    for (const string& command : commandsList)
    {
        if (lowerCaseInput.find(command) == 0)
            return true;
    }
    return false;
}

string getInfo()
{
    fs::path currentPath = fs::current_path();
    string drive = currentPath.root_name().string();
    string userName = currentPath.parent_path().filename().string();
    return drive + "\\Users\\" + userName + ">";
}

string lowerCase(string UI)
{
    transform(UI.begin(), UI.end(), UI.begin(), ::tolower);
    return UI;
}

// On chapter 4 of the book, how to use the WINAPI
// COMPLETE
DWORD WINAPI executeCommand(LPVOID secondParameter)
{
    string command = *(string*)secondParameter;
    system(command.c_str());
    return 0;
}


