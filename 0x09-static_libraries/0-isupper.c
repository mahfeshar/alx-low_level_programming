#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: integer input (ASCII code for char)
 *
 * Return: 1 if c is uppercase
 *	0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
