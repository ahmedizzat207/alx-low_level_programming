#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - The function concatenates all the arguments which passed to the
 * program
 * @ac: the number of the arguments
 * @av: an array of the argument passed to the program
 *
 * Return: a pointer to a string or NULL if it fail
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int n;
	char *ptr;
	unsigned long int lensum;

	n = 0;
	lensum = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		lensum += strlen((const char *)av[i]);
	}
	lensum += ac + 1;
	ptr = malloc(sizeof(char) * lensum);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[n] = av[i][j];
			n++;
		}
		ptr[n] = '\n';
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
