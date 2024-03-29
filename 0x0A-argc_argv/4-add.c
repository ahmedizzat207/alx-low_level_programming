#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always (0) if all the arguments are numbers, otherwise return (1)
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (n = 0; *((argv[i]) + n) != '\0'; n++)
		{
		if ((*((argv[i]) + n) < 48) || (*((argv[i]) + n) > 57))
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
