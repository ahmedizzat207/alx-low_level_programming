#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string, followed by a newline
 *
 * @str: the string to be printed and then following a newline
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		putchar(*(str + n));
		n++;
	}
	putchar('\n');
}
