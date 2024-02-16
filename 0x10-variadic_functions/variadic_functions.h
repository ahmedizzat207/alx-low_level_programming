#ifndef VARIADICFUNCTIONS
#define VARIADICFUNCTIONS

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
void print_char(va_list *argptr);
void print_int(va_list *argptr);
void print_float(va_list *argptr);
void print_string(va_list *argptr);



/**
 * struct identifiers - The structure store the types characters and related
 * functions
 * @character: a character to compare the types from the given string on the
 * function
 * @charfunc: a pointer to a function that have a void return type and
 * a pointer to a va_list type as it's argument the function prints the
 * argument of the specified type
 *
 * Description: The structure works as a storage of types and specific
 * functions to print that specified type
 */

struct identifiers
{
	char character;
	void (*charfunc)(va_list *argptr);
};

#endif /* #ifndef VARIADICFUNCTIONS */
