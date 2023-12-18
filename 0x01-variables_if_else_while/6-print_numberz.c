#include <stdio.h>

/**
 * main - print all single digit of base 10 started with 0 and followed by
 * newline
 *
 * Return: always (0)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
