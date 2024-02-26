#include "main.h"

/**
 * binary_to_uint - The function converts a binary number to an unsigned int
 * @b: a pointer to character (string) that contain the binary number
 *
 * Return: the converted unsigned integer equivilent to the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, exp;
	int count;

	if (!b)
		return (0);
	result = 0;
	for (count = 0; b[count]; count++)
		;
	for (exp = 0, --count; count >= 0; exp++, count--)
	{
		if (b[count] != 48 && b[count] != 49)
			return (0);
		result += _pow(((((unsigned int)b[count]) - 48) * 2), exp);
	}
	return (result);
}

/**
 * _pow - The function calculates the exponent result of a number to specific
 * power
 * @basic: an unsigned integer representing the basic number
 * @power: an unsigned integer representing the power number
 *
 * Return: an unsigned integer of the result from the opration
 */

unsigned int _pow(unsigned int basic, unsigned int power)
{
	unsigned int result, exponent;

	if (basic)
		result = 1;
	else
		result = 0;
	for (exponent = 0; exponent < power; exponent++)
		result *= basic;
	return (result);
}
