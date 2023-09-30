#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Description: printing all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j;
	bool first = true;

	for (; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (!first)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			first = false;
		}
	}
	putchar('\n');
	return (0);
}
