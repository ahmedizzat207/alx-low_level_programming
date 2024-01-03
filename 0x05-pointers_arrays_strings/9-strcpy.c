#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string from src to dest
 * @dest: the destenation in which to copy the string to
 * @src: the string to be copyed
 *
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
		if (*(src + counter) != '\0')
			*(dest + counter) = *(src + counter);
	}
	return (*dest);
}
