#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - The function selects a function depending on argument
 * @s: a pointer to a character which contain the mathematical operation that
 * asked by the user
 *
 * Description: The function selects from a group of function that conduct
 * specific mathematical operation depending on the givan argument by the user
 *
 * Return: a pointer to a function if the operator is found and NULL if the
 * operator is not from the main 5 operators
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while(ops[i].op != NULL)
	{
		if (*s == (*ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
