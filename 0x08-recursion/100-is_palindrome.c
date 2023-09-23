#include "main.h"
/**
 * len - function to return length
 * @s: string
 * Return: length for string
 */

int len(char *s)
{
	int l = 0;
<<<<<<< HEAD
	while (s[l])
		l++;
	return (l);
}

=======
	if (*(s + l))
	{
		l += 1;
		l += len(s + l);
	}
	return (l);
}

/**
 * solve - solution for this problem
 * @len: length 
 * @i: first index in the string
 * Return: 1 if the string is palindrome
 */
int solve(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (solve(s, len, i + 1));
	return (0);
}
>>>>>>> 49940896692ffee37f6aee44554aaf10188c8422

/**
* is_palindrome - functions check if string palindrome
* @s: string
* Return: if palindrome return 1 else return 0
*/

int is_palindrome(char *s)
{
<<<<<<< HEAD
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
=======
	int i = 0, n = len(s);

	if (*s == '\0')
		return (1);
	return (solve(s, n, i));
>>>>>>> 49940896692ffee37f6aee44554aaf10188c8422
}
