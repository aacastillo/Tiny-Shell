# Tiny-Shell
This project focuses on process management using the fork, exec, and wait system calls to build a tiny shell. Command shells use these system calls to run commands through different child processes.

## Details
Like a real shell, trivial shell (tsh) will take as input the name of the program. The program can be the name of any executable accessible in your enviroment `Path` variable.  The shell should run the specified program with the arguments before prompting for a new user command.

The command "quit" should terminate your shell.

Here is a simple example:
```
$ ./tsh
tsh> ls
foo.txt
tsh> quit
$
```
