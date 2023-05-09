#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
 * @line_number: file line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = line_number;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

/**
 * pop - removes the top node of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
}

/**
 * swap - swaps the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
}

/**
 * add - adds the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void add(stack_t **stack, unsigned int line_number)
{
}
