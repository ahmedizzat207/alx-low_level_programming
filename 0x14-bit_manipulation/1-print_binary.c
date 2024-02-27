#include <stdio.h>
#include "main.h"

/**
 * print_binary - The function prints the binary representation of a number
 * @n: an unsigned long integer that contain the number to print in binary
 *
 * Description: The function shouldn't use arrays nor malloc not % and /
 * operators and it had no return value
 */

void print_binary(unsigned long int n)
{
	unsigned long int check;
	int count;

	check = n;
	for (count = 0; check; count++)
	{
		check = (check >> 1);
	}
	if (!n)
		_putchar('0');
	for (check = n, count--; count >= 0; count--)
	{
		check = n;
		check = (((check >> count) & 1) + 48);
		_putchar((char)check);
	}
}
