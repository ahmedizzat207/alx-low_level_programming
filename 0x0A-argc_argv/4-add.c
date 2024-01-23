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
	int sum;

	sum = 0;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				if (atoi(argv[i]) < 0)
				{
					printf("Error\n");
					return (1);
				}
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
