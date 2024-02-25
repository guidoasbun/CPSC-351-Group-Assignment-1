// ConsoleApplication1.cpp : Simple Command Line Interpreter.
// Class: CPSC 351-09 22045
// Group: 1
// Members:
//      - Alex Le
//      - Conner Robbins
//      - Harry Derderian
//      - Guido Asbun


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
bool validExitCommand(const vector<string>&, const string&);
DWORD WINAPI executeCommand(LPVOID secondParameter);

int main()
{
    // Gathers user details such as current path, drive name, and currently signed-in user.
    string UserInfo = getInfo(); 
    // List of supported commands.
    const vector<string> SUPPORTED_COMMANDS =
    { "dir", "help", "vol", "path", "tasklist", "notepad", "echo", "color", "ping" };
    // List of supported exit commands. 
    const vector<string> EXIT_COMMANDS = { "clear", "exit" };
    // Displays a list of supported commands to the terminal.
    displayMenu(SUPPORTED_COMMANDS);
    // Continuously takes in user input until a valid exit command is entered.
    while (true)
    {
        // Display/inputs relevant information to/from the terminal.
        cout << UserInfo << " ";
        char userInput[100];
        fgets(userInput, sizeof(userInput), stdin);
        string stringInput(userInput);
        // Verifies that the command is supported.
        if (isCommandSupported(SUPPORTED_COMMANDS, stringInput))
        {
            HANDLE thread = CreateThread(NULL, 0, executeCommand, (LPVOID)&stringInput, 0, NULL);
            if (thread) 
            {
                WaitForSingleObject(thread, INFINITE);
                CloseHandle(thread);
            }
            else
                cout << "Unable to create a thread.\n";
           
        }
        else if (validExitCommand(EXIT_COMMANDS, stringInput))
        {
            break;
        } 
        else 
        {
            cout << "Error, unsupported command.\n";
        }
    }
    cout << "Program has been terminated.\n";
    return 0;
}

void displayMenu(const vector<string>& commands)
{
    cout << "Wellcome to myShell\n available commands:\n";
    for (size_t i = 0; i < commands.size(); ++i) {
        cout << i + 1;
        int dots = 25 - to_string(i + 1).length();
        for (int x = 0; x < dots; ++x) 
        {
            cout << ".";
        }
        cout << " " << commands[i] << endl;
    }
}

bool isCommandSupported(const vector<string>& commandsList, const string& commandInput)
{
    string lowerCaseInput = lowerCase(commandInput);
    for (const string& command : commandsList)
        if (lowerCaseInput.find(command) == 0)
            return true;
    
    return false;
}

bool validExitCommand(const vector<string>& supportedExitCommands, const string& commandInput)
{
    string lowerCaseInput = lowerCase(commandInput);
    for (const string& command : supportedExitCommands)
        if(lowerCaseInput.find(command) == 0)
            return true;
    
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

DWORD WINAPI executeCommand(LPVOID secondParameter)
{
    string command = *(string*)secondParameter;
    system(command.c_str());
    return 0;
}