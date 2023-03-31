#include "commands.h"

Directory::Directory() {
    dir = opendir(".");
    if (dir) {
        cout << "Current directory opened." << endl;
    }
    getcwd(currentDir, 256);
}
void listCommands() {
    cout << "Type a command:" << endl;
    cout << "List Directory: " << LIST_DIRECTORY << endl;
    cout << "Remove: " << REMOVE << endl;
    cout << "Copy: " << COPY << endl;
    cout << "Move: " << MOVE << endl;
    cout << "Change Directory: " << CHANGE_DIRECTORY << endl;
    cout << "Quit: " << QUIT << endl;
}

void parse_command(string input) {
    int index = 0;
    if (input.compare("ls") == 0) {
        
    }
    else if (input.compare("cd") == 0) {
        string directory = "";
        cin >> directory;
        
    } 
}

