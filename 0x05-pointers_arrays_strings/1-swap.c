#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 *
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
