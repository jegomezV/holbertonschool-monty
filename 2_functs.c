#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: the line in case of error
 */

void _add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	_pop(stack, line_number);
}

/**
 * _nop - Does nothing.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
