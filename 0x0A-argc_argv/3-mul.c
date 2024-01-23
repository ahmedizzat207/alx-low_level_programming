#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always (0) if the program recives two number to multiply, otherwise
 * return (1)
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;
	int result;

	result = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 48) && (*argv[i] <= 57))
				mul = *argv[i] - 48;
			result *= mul;
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
