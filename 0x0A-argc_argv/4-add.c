#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: count of arg
 * @argv: pointer for array of strings
 *
 * Return: 0 (Success)
 * 1 (Error)
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
