#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The number of arguments supplied to the program.
 * @arg: An array of pointers to the arguments.
 *
 * Return: Always 0 (success)
 */

int main(int __attribute__((__unused__)) argc, char *arg[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(arg[1]);
	b = atoi(arg[3]);
	op = arg[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
