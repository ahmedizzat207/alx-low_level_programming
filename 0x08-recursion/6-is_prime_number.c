#include "main.h"

/**
 * is_prime_number - check if the number is prime number or not
 * @n: the number to be checked
 *
 * Return: always (1) if the number is prime and (0) if the number is composite
 */

int is_prime_number(int n)
{
	return (prime_number(n, 2));
}

/**
 * prime_number - check if the number is prime number or not
 * @n: the number to be checked
 * @i: the dividing number
 *
 * Return: always return (1) if the number is prime and (0) if the number is
 * composite
 */

int prime_number(int n, int i)
{
	if (n < 1)
		return (0);
	else if ((n % i) == 0)
		return (0);
	else if ((i >= (n / 2)))
		return (1);
	return (prime_number(n, i + 1));
}
