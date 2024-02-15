#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - The function prints strings that given as arguments,
 * followed by a new line
 * @separator: a pointer to a character (string) that separat each two strings
 * @n: an unsigned integer that contain the arguments number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *checker;
	va_list strings;

	if (n != 0)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			checker = va_arg(strings, char *);
			if (checker != NULL)
				printf("%s", checker);
			else
				printf("(nil)");
			if (separator != NULL && (i + 1) != n)
				printf("%s", separator);
		}
	}
	printf("\n");
}
