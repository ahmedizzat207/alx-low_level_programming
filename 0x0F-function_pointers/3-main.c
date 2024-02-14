#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - The function works as a calculator
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Description: The function takes an argument from the user consist of two
 * integers and an operator between them and decide and print the result of
 * the operation
 *
 * Return: always return (0) if the function is successful and anything else
 * if failed
 */

int main(int argc, char **argv)
{
	int Firstopr;
	int Secondopr;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	Firstopr = atoi((const char *)argv[1]);
	Secondopr = atoi((const char *)argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (Secondopr == 0 && (operation == op_div || operation == op_mod))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operation(Firstopr, Secondopr));
	return (0);
}
