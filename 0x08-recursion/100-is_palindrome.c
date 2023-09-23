#include "main.h"
/**
 * len - function to return length
 * @s: string
 * Return: length for string
 */

int len(char *s)
{
	int l = 0;
	while (s[l])
		l++;
	return (l);
}


/**
* is_palindrome - functions check if string palindrome
* @s: string
* Return: if palindrome return 1 else return 0
*/

int is_palindrome(char *s)
{
	int i = 0, n = len(s) - 1, j;
	char *new;

	if (s == '\0')
		return (1);

	if (s[i] == s[n - i])
	{
		i++;
		for (j = i; j <= n - i; j++)
			new += s[j];
		ispalindrome(new);
	}
	return (0);
}
