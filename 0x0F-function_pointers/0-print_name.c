#include "funciton_pointers.h"

/**
 * print_name - The function prints a name
 * @name: The name to be printed
 * @f: a pointer to a function that decide how to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
