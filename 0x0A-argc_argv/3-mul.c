#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of arg
 * @argv: pointer for array of strings
 *
 * Return: 0 (Success)
 * 1 (failed)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
