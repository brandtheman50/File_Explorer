#ifndef COMMANDS_H
#define COMMANDS_H

#define LIST_DIRECTORY "ls"
#define REMOVE "rm"
#define COPY "cp"
#define MOVE "mv"
#define CHANGE_DIRECTORY "cd"
#define QUIT "quit"

#include <iostream>
#include <unistd.h>
#include <string>
#include <string.h>
#include <dirent.h>

using std::cout; using std::cin;
using std::endl; using std::string;

class Directory {
    public:
        DIR *dir;
        struct dirent *en;
        char currentDir[256];
        void changeDirectory(string directory);
        void listDirectory(string directory);
        Directory();
};
void listCommands();
void parse_command(string input);
#endif