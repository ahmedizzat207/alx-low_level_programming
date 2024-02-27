#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * flip_bits - The function calculates the numbers of bits needs to be fliped
 * to get from one number to another
 * @n: an unsigned long integer represent the first number to compare
 * @m: an unsigned long integer represent the second number to compare
 *
 * Return: an unsigned integer represent the number of different bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check1, check2;
	unsigned int index, count;

	for (index = 0, count = 0; index < (sizeof(n) * 8); index++)
	{
		check1 = n;
		check2 = m;
		check1 = (check1 & _specialpow(2, index)) >> index;
		check2 = (check2 & _specialpow(2, index)) >> index;
		count += (check1 ^ check2);
	}
	return (count);
}

/**
 * _specialpow - The function calculates the exponent result of a number to
 * specific power
 * @basic: an unsigned long integer representing the basic number
 * @power: an unsigned long integer representing the power number
 *
 * Return: an unsigned long integer of the result from the opration
 */

unsigned long int _specialpow(unsigned long int basic, unsigned long int power)
{
	unsigned long int result, exponent;

	result = 1;
	for (exponent = 0; exponent < power; exponent++)
		result *= basic;
	return (result);
}
