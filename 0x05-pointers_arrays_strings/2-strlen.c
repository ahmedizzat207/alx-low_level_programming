#include "main.h"
#include <stdio.h>

/**
 * _strlen - count and return the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
