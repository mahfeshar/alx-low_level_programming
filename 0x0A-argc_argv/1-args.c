#include <stdio.h>

/**
 * main - entry point
 * @argc: count of arg
 * @argv: pointer for array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
