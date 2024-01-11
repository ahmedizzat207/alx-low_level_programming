#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a sting in reverse
 * @s: the stirng to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	int i;
	int n;
	int e;
	i = 0;
	if ((*s == '\0') || (i != 0))
	{
		putchar(*(s - 1));
		i = 1;
		if (n != 0)
		{
			n--;
			_print_rev_recursion(s - 1);
		}
	}
	else if (i == 0)
	{
		n++;
		_print_rev_recursion(s + 1);
	}
}
