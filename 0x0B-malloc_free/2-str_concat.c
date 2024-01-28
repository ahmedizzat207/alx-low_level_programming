#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - The function concatenates two given strings
 * @s1: the first string that the second string will be added to
 * @s2: the second string that will be added at the end
 *
 * Return: a pointer to the resulted string or NULL in failer
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int i2;
	char *ptr;
	unsigned long int s1len;
	unsigned long int s2len;

	s1len = strlen((const char *)s1);
	s2len = strlen((const char *)s2);
	ptr = malloc(sizeof(char) * (s1len + s2len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; (unsigned long)i < s1len; i++)
		ptr[i] = s1[i];
	for (i2 = 0; (unsigned long)i2 < s2len; i2++)
	{
		ptr[i] = s2[i2];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
