#include "main.h"

/**
 * _atoi -  convert a string to an integer
 *
 * @s: string to convert
 * Return: the integer number
 */

int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int number = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
			number = number * 10 + s[i] - '0';

		else if (number > 0)
			break;
		i++;
	}

	return (number * sign);
}
