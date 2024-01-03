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
	int counterpls1;

	counter = 0;
	sign = 1;
	sum = 0;
	while (*(s + counter) != '\0')
	{
		counterpls1 = counter + 1;
		if (*(s + counter) == '-')
			sign *= -1;
		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			sum = sum * 10 + (*(s + counter) - 49);
			if ((*(s + counterpls1) < '0') || (*(s + counterpls1) > '9'))
				break;
		}
		counter++;
	}
	result = sign * sum;
	return (result);
}
