#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two string
 * @dest: the first and the main string
 * @src: the second string to be concatenates in the first one
 *
 * Retrun: the result (dest) string pointer
 */

char *_strcat(char *dest, char *src)
{
	int counter;
	int copy;

	counter = 0;
	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	copy = 0;
	while (*(src + copy) != '\0')
	{
		*(dest + counter) = *(src + copy);
		counter++;
		copy++;
	}
	return (dest);
}
