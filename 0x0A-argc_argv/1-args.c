#include <stdio.h>

/**
 * main - a program that print the number of argument passed into it
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
