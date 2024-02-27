#include <limits.h>
#include "main.h"


/**
 * clear_bit - The function sets the value of a bit to 0 at a given index
 * @n: a pointer to unsigned long integer contain the main value to set on it
 * the index bit to 0
 * @index: an unsigned integer contain the index of the bit to set to 0
 * 
 * Return: 1 in success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int power;
	unsigned int count;

	if (index >= (sizeof(*n) * 8) && !n)
		return (-1);
	power = 1;
	for (count = 0; count < index; count++)
		power *= 2;
	power = ULONG_MAX - power;
	*n = *n & power;
	return (1);
}
