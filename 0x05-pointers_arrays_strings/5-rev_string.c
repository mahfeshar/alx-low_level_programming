#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string tha I want to revers
 */

void rev_string(char *s)
{
	const int len = strlen(s);
	int i = len - 1;
	int j = 0;
	char tmp;

	for (; i >= len / 2; i--, j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
