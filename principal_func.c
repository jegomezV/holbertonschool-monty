#include "monty.h"

void f_func(char *file)
{
    FILE * fpointer;
    size_t read_size = 0;
    void (*opcode_func)(stack_t **, unsigned int);
    int line_number = 1;
	stack_t *head;

    fpointer = fopen(file, "r+");

    if (!fpointer)
    {
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

}