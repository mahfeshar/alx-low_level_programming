#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string that I want to know it len
 *
 * Return: integer for length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
