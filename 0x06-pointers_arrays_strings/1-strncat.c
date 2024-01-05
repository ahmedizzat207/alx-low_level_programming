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
	int i;

	counter = 0;
	i = 0;
	while (1)
	{
		if (*(dest + counter) == '\0')
		{
			for (i = 0; i < n; i++)
			{
				if (*(src + i) == '\0')
					break;
				*(dest + counter) = *(src + i);
				counter++;
			}
			break;
		}
		counter++;
	}
	return (dest);
}
