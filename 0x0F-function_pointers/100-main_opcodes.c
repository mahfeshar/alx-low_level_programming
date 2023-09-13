#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @arg: The number of arguments
 * @argv: An array of pointers.
 *
 * Return: Always 0 (success)
 */
int main(int arg, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (arg != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		if (index)
			printf(" ");
		printf("%.2x", opcode);

		address++;
	}

	printf("\n");

	return (0);
}
