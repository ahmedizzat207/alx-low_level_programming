#include "main.h"

/**
 * _strcmp - compare two strings to be equel or smaller or bigger
 * @s1: the main string to compare with
 * @s2: the second string to compare by
 *
 * Return: an integer greater or equel or smaller than zero respective to the
 * comparsion
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		sum1 += s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		sum2 += s2[i];
	if (sum1 > sum2)
		return (15);
	else if (sum1 == sum2)
		return (0);
	else
		return (-15);
}
