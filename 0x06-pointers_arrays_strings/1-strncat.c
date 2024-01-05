#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two string with specified number of characters
 * @dest: the first string to be started with
 * @src: the second string to be writed after the first one
 * @n: the number of the characters to be writed from the second string
 *
 * Return: the resulted (dest) string
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter;
	int copy;

	counter = 0;
	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	copy = 0;
	while (copy < n)
	{
		*(src + copy) = *(dest + counter);
		copy++;
		counter++;
	}
	return (dest);
}
