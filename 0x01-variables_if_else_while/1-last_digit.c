#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: printing the last digit of the number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ld = n % 10;

	printf("Last digit of %i is %i and is ", n, ld);
	if (ld > 5)
		printf("greater than 5\n");
	else if (ld == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0");
	return (0);
}
