#include "monty.h"

/**
 *_push - push an integer onto the stack
 *@stack: double pointer to head of stack
 *@line_number: line number of file we are processing
 *
 */

void _push(stack_t **stack, unsigned int line_number)
{
	int data;
	char *arg;

	arg = strtok(NULL, "\n\t ");
	if (arg == NULL || check_digit(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = atoi(arg);
	if (add_node(stack, data) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * _pall - prints all value on stack from top to down
 * @stack: double pointer to head of stack
 * @line_number: line number we are executing from script file
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *mover;

	(void)line_number;

	mover = *stack;
	while (mover != NULL)
	{
		printf("%d\n", mover->n);
		mover = mover->next;
		if (mover == *stack)
		{
			return;
		}
	}
}