#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - The function should concatenates two strings
 * @s1: The first and main string that should be at the start
 * @s2: The second string that should follow the first string
 * @n: The number of bytes that the function should take from the second string
 *
 * Return: a pointer to the resulted string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len;
	unsigned int i;
	unsigned int j;

	len = strlen((const char *)s1);
	if (s2 == NULL)
		n = 0;
	ptr = malloc(sizeof(*ptr) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
