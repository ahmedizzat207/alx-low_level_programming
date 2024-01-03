#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to integer
 * @s: the string to be converted
 *
 * Return: the integer that had been converted
 */

int _atoi(char *s)
{
	int sign;
	int sum;
	int counter;
	int result;

	counter = 0;
	sign = 1;
	sum = 0;
	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == '-')
			sign *= -1;
		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
			sum = sum * 10 + *(s + counter);
		counter++;
	}
	result = sign * sum;
	return (result);
}
