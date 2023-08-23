#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: input string
 *
 * Return: string after capitalizes
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';

		if (str[i] == '\n' ||
			str[i] == '\t' ||
			str[i] == ' ' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
