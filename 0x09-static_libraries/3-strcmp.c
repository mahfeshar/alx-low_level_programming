#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first str
 * @s2: second str
 *
 * Return: integer number ,0 if it's same
 *	negative if first less
 *	positive if second less
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
