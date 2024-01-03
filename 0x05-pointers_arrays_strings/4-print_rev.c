#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 *
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	n -= 1;
	while (n >= 0)
	{
		putchar(*(s + n));
		n--;
	}
	putchar('\n');
}
