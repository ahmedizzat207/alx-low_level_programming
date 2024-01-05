#include "main.h"

/**
 * _strncpy - copys a string to another one
 * @dest: the string to be past the copyed string
 * @src: the string to be copyed
 * @n: the number to characters to be copyed
 *
 * Return: the resulted (dest) string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		*(dest + counter) = *(src + counter);
		if ((*(src + counter) == '\0') || (*(dest + counter) == '\0'))
			break;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
