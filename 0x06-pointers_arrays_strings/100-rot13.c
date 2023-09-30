#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @s: string
 * Return: string after encoded
*/

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
