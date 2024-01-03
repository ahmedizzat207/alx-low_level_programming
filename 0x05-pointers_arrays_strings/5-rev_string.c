#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the given string
 *
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int counter;
	int reverse;
	char tmp;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		counter++;
	}
	tmp = *s;
	counter -= 1;
	reverse = 0;
	while (counter >= 0)
	{
		*(s + reverse) = tmp[counter];
		counter--;
		reverse++;
	}
}
