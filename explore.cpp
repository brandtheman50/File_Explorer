#include <iostream>
#include <string>
#include <unistd.h>
#include <dirent.h>
#include "commands.h"

using std::cout; using std::cin;
using std::endl; using std::string;


int main(int argc, char* argv[]) {
    cout << "Welcome to the console file explorer! Please choose a working command:" << endl;
    string input_command = "";
    Directory directory;
    while (input_command != "quit") {
        listCommands();
        cin >> input_command;
        parse_command(input_command);
    }
    
    return EXIT_SUCCESS;
}