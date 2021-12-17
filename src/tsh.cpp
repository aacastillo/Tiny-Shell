#include <tsh.h>
#include <iostream>

using namespace std;

void simple_shell::parse_command(char* cmd, char** cmdTokens) {
    // TODO: tokenize the command string into arguments

    char* token = strtok(cmd, " \n");

    int index = 0;
    while (token) {
        cmdTokens[index] = token;
        ++index;
        token = strtok(NULL," \n");
    }
    
    //Add null to end of cmdToken
    cmdTokens[index] = NULL;
}

void simple_shell::exec_command(char** argv) {
    // TODO: fork a child process to execute the command.
    // parent process should wait for the child process to complete and reap it
    //Create null terminating argument list:
        /*
            traverse through argv
                add each token to a new argument list
        */
    int pid = fork();
    if (pid < 0) {
        cout<<"error";
    } else if (pid == 0){ //child
        execvp(*argv, argv);
    } else {//parent
        wait(NULL);
    }
}

bool simple_shell::isQuit(char* cmd) {
    // TODO: check for the command "quit" that terminates the shell
    bool result = false;
    (strncmp(cmd, "quit", 4)==0)? result = true : result = false;
    return result;
}


