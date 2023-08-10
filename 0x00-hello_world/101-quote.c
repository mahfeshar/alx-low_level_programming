#include<stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (not success)
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = sizeof(q)/sizeof(q[0]);
	write(2, q[], n);
	return (1);
}
