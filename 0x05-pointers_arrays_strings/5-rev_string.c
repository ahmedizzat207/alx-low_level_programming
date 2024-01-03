#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the given string
 *
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	n -= 1;
	while (n > 0)
	{
		putchar(*(s + n));
		n--;
	}
	putchar(*(s + 0));
	putchar('\0');
}
