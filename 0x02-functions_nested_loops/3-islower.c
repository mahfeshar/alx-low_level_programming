#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: input for the functions(ASCII code for char)
 *
 * Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
