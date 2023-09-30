#include "variadic_functions.h"
#include <stdio.h>

void p_char(va_list arg);
void p_int(va_list arg);
void p_f(va_list arg);
void p_s(va_list arg);
void print_all(const char * const format, ...);

/**
 * p_char - print character
 * @arg: argument
 */

void p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * p_int - print integer
 * @arg: argument
 */

void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * p_f - print float
 * @arg: argument
 */

void p_f(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * p_str - print string
 * @arg: argument
 */

void p_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: arguments of diffrent data types
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	print_t prt[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_f},
		{"s", p_str}
	};
	va_list pa;
	char *s = "";

	va_start(pa, format);
	while (i < 9)
	{
		j = 0;
		while (j < 4 && *(prt[j].c) != *(format + i))
			j++;
		if (j < 4)
		{
			printf("%s", s);
			prt[j].print_f(pa);
			s = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(pa);
}
