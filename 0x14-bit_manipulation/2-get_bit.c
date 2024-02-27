#include <stdio.h>
#include "main.h"


/**
 * get_bit - The function returns the value of a bit at a given index
 * @n: an usigned long integer contain the whole number to grab a bit from it
 * @index: an unsigned integer represent the position to grab the value from n
 *
 * Return: an integer of the number of the bit grabed either 1 or 0, or -1 if
 * an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n & _pow(2, index)) >> index);
}

/**
 * _pow - The function calculates the exponent result of two number
 * @basic: an unsigned integer represent the basic number of the exponent
 * @power: an unsigned integer represent the power number of the exponent
 *
 * Return: an unsigned integer contain the result of the exponent
 */
unsigned int _pow(unsigned int basic, unsigned int power)
{
	unsigned int result, count;

	result = 1;
	for (count = 0; count < power; count++)
		result *= basic;
	return (result);
}
