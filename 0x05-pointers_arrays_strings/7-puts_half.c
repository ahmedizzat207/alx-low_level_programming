#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of a string, followed by a newline
 *
 * @str: the string to be half printed
 */

void puts_half(char *str)
{
	int counter;
	int half;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		counter++;
	}
	if (counter % 2 == 0)
		half = counter / 2;
	else
		half = (counter - 1) / 2;
	while (half < counter)
	{
		putchar(*(str + half));
		half++;
	}
}
