#include <stdio.h>

/**
 * main - a function to print the program nam, followed by a new line
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
