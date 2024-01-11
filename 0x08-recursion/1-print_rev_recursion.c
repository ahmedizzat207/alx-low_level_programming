#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a sting in reverse
 * @s: the stirng to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
