#include "main.h"

/**
 * factorial - calculte the factorial of a given number
 * @n: the number to calculate it's facorial
 *
 * Return: the facorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
