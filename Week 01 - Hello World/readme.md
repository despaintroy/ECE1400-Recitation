# Compiling C from the Command Line

This covers very basic usage of the commands we used in recitation as well as a few extras that may be useful to you. There's a lot more you can do with them, so look these up online if you're interested!

Tip: If you get lost in the filesystem in the command line, type `cd` (with a space after) then drag and drop a folder from Windows explorer into Cygwin. This will automatically paste in the correct filepath to that location


<br>

## Navigating Directories

| Command | Example | Description |
| ------- | ----- | ------- |
| `pwd` | `pwd` | Print working directory. Shows the path of where you currently are in the computer's file system. |
| `ls` | `ls` | Lists the files and folders (directories) within the current directory |
| `mkdir` | `mkdir Projects` | Make directory. Creates a new directory within the current one. |
| `cd` | `cd Projects` | Change directory. Moves to a different directory within the current one. Use `cd ..` to move back one level. |
| `rm` | `rm -r MyFolder` | Remove. Deletes the specified file or directory within the current one. The -r only needs to be included if you're deleting a directory.  |
|  | `__________________` |  |


<br>

## Working with C Code

| Command | Usage | Description |
| ------- | ----- | ------- |
| `touch` | `touch hello.c` | Creates a new text file in the current directory. |
| `cat` | `cat hello.c` | Concatenate. Prints the contents of a text file to the command line. |
| `gcc` | `gcc hello.c -o hello.exe` | Compiles C code and creates an executable file that the computer can run. Use `./hello.exe` to run the executable file.  |
|  | `_________________________` |  |


<br>

## Hello World Program Example

```c
#include <stdio.h>

int main() {
	printf("Hello World!");
	
	getchar(); 
	return 0;
}
```