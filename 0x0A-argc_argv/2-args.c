#include <stdio.h>

/**
 * main - a program that prints all argument it recives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
