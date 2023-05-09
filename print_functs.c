#include "monty.h"
/**
 * pall - prints all nodes
 * @stack: nodes
 * @line_number: file line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * pint - prints a node
 * @stack: nodes
 * @line_number: file line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
}

/**
 * nop -  doesn’t do anything.
 * @stack: nodes
 * @line_number: file line number
 */

void nop(stack_t **stack, unsigned int line_number)
{
}
