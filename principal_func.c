#include "monty.h"

/**
 * f_func - function principal
 * @file: pointer to the file name
 */

void f_func(char *file)
{
	FILE *fpointer;
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

	head = NULL;

	while (getline(&buffer, &read_size, fpointer) != -1)
	{
		opcode_func = check_opcodes();
		if (opcode_func == NULL)
		{
			dprintf(STDERR_FILENO, "L%i: unknown instruction %s",
				line_number, buffer);
			exit(EXIT_FAILURE);
		}
		opcode_func(&head, line_number);
		line_number++;
	}
	free(buffer);
	free_stack(head);
	fclose(fpointer);
}
