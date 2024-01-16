#include "main.h"

/**
 * _sqrt_recursion - calculate the natural square root of the number
 * @n: the number to calculate it's natural square root
 *
 * Return: return the natural square root if the number have any and if not
 * return (-1)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - check the natural square root of a number
 * @n: the number to calculate it's natural square root
 * @i: counter for the square root
 *
 * Return: the natural square root if the number have any and if not
 * return (-1)
 */

int _sqrt(int n, int i)
{
	if ((n < 0) || (n < (i * i)))
		return (-1);
	else if (n == (i * i))
		return (i);
	return (_sqrt(n, i + 1));
}
