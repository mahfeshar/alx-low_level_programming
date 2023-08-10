#include <stdio.h>
int main(void)
{
	char q[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = sizeof(q) / sizeof(q[0]);
	for(int i = 0;i <n; i++)
		putchar(q[i]);
}
