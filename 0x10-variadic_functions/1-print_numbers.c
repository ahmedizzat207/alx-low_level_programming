#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - The function prints numbers given as arguments, followed by
 * a new line.
 * @separator: a pointer to a char (string) that specify the string that should
 * be printed between numbers
 * @n: an unsigned integer that specify the number of given arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	if (n != 0)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arguments, int));
			if (separator != NULL && (i + 1) != n)
				printf("%s", separator);
		}
	}
	printf("\n");
}
