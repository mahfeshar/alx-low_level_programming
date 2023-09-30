#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of arg
 * @argv: pointer for array of strings
 *
 * Return: 0 (Success)
 * 1 (Failed)
 */

int main(int argc, char **argv)
{
	int num, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (num / 25 != 0)
	{
		sum += num / 25;
		num %= 25;
	}
	if (num / 10 != 0)
	{
		sum += num / 10;
		num %= 10;
	}
	if (num / 5 != 0)
	{
		sum += num / 5;
		num %= 5;
	}
	if (num / 2 != 0)
	{
		sum += num / 2;
		num %= 2;
	}
	sum += num;
	printf("%d\n", sum);
	return (0);
}
