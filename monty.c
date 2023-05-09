#include "monty.h"
/**
 * main - interpreter for Monty ByteCodes files.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f_func(argv[1]);
	return (0);
}
