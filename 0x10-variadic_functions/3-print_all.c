#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"



/**
 * print_all - The function prints anything
 * @format: a pointer to a character (string) that contains all the arguments
 * types respectively
 *
 * Description: The function should print all four types (c:char, i:integer,
 * f:float, s: char *) that given by order in the format string to specify
 * the types order and number of arguments by default.
 */

void print_all(const char * const format, ...)
{
	identifier checker[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int formatcount;
	int checkercount;
	char *separator;
	va_list arguments;
	va_list *argptr;

	va_start(arguments, format);
	argptr = &arguments;
	formatcount = 0;
	separator = "";
	while (format && format[formatcount])
	{
		checkercount = 0;
		while (checker[checkercount].character)
		{

			if (format[formatcount] == checker[checkercount].character)
			{
				printf("%s", separator);
				checker[checkercount].charfunc(argptr);
				separator = ", ";
			}
			checkercount++;
		}
		formatcount++;
	}
	printf("\n");
}





/**
 * print_char - The function print a character from the calling variadic
 * function
 * @argptr: a pointer of type va_list to the arguments list passed to the
 * calling variadic function
 */

void print_char(va_list *argptr)
{
	printf("%c", va_arg(*argptr, int));
}

/**
 * print_int - The function print an integer from the calling variadic
 * function
 * @argptr: a pointer of type va_list to the argument list passed to the
 * calling variadic function
 */

void print_int(va_list *argptr)
{
	printf("%d", va_arg(*argptr, int));
}

/**
 * print_float - The function print a float from the calling variadic function
 * @argptr: a pointer of type va_list to the argument list passed to the
 * calling variadic function
 */

void print_float(va_list *argptr)
{
	printf("%f", va_arg(*argptr, double));
}

/**
 * print_string - The function prints a string from the calling variadic
 * function
 * @argptr: a pointer of type va_list to the argument list passed to the
 * calling variadic function
 */

void print_string(va_list *argptr)
{
	char *check;

	check = va_arg(*argptr, char *);
	if (check == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", check);
}
