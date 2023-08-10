#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	prinf("Size of a char: %u byte(s)\n", sizeof(char));
	prinf("Size of an int: %u byte(s)\n", sizeof(int));
	prinf("Size of a long int: %u byte(s)\n", sizeof(long int));
	prinf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
