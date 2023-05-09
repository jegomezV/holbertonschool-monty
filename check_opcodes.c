#include "monty.h"

/**
 * check_opcodes - checks a valid opcode in the line
 * Return: opcode (char *)
 */

void (*check_opcodes(void))(stack_t **, unsigned int)
{

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
}
