#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elemants of an array of integers, followed by
 * a newline
 *
 * @a: the array of integers
 * @n: the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		printf("%d", *(a + counter));
		counter++;
		if (counter != n)
			printf(", ");
	}
	putchar('\n');
}
