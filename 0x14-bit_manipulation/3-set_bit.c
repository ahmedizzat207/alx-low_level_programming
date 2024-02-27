#include "main.h"


/**
 * set_bit - The function sets the value of a bit to 1 at a given index
 * @n: a pointer to unsigned long integer contain the value to set it's
 * index'th element to 1
 * @index: a unsigned integer represent the index to change the bit to 1
 *
 * Return: an integer of 1 if the function worked or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int power, count;

	if (index >= (sizeof(*n) * 8) || !n)
		return (-1);
	power = 1;
	for (count = 0; count < index; count++)
		power *= 2;
	*n = *n | power;
	return (1);
}
