#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character of a string starting with the first
 * character, followed by a newline
 *
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (n % 2 == 0)
			putchar(*(s + n));
		n++;
	}
	putchar('\n');
}
