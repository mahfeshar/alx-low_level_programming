#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line
 *	for multiples of three print Fizz
 *	instead of the number and for the multiples of five print Buzz
 *	For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
