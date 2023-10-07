#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_f(int f);

/**
 * close_f - function to close file
 * @f: file
 */

void close_f(int f)
{
	int x;

	x = close(f);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}


/**
 * main - entry point
 * @argc: number of argument
 * @argv: arguments
 * Return: integer for the statue
 */

int main(int argc, char **argv)
{
	int dest, to, rd, wr;
	char *str;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	str = malloc(sizeof(char) * 1024);
	if (str == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	dest = open(argv[1], O_RDONLY);
	rd = read(dest, str, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (dest == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(str);
			exit(98);
		}
		wr = write(to, str, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(str);
			exit(99);
		}
		rd = read(dest, str, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(str);
	close_f(dest);
	close_f(to);
	return (0);

}
