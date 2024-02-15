#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - The function returns the sum of all its parameters
 * @n: an integer representing the number of parameters
 *
 * Return: an integer of the resulted summation, or (0) if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list argument;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(argument, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argument, int);
	return (sum);
}
