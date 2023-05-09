#include "monty.h"

void f_file(char *file){
    FILE * fpointer;
    fpointer = fopen(file, "r+");
    if (!fpointer)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

}