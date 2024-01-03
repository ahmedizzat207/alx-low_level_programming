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
	counter -= 1;
	reverse = 0;
	while (counter != reverse)
	{
		tmp = *(s + reverse);
		*(s + reverse) = *(s + counter);
		*(s + counter) = tmp;
		counter--;
		reverse++;
	}
}
