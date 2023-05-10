#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
 * @line_number: file line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	char **split_buff;
	int num;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		free(new);
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	split_buff = _split(buffer, " ");

	num = _atoi(split_buff[1], line_number);

	new->n = num;
	new->prev = NULL;
	new->next = *stack;

	if (*stack)
		(*stack)->prev = new;
	*stack = new;
	free(split_buff);
}
