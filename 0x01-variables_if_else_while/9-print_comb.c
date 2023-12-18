#include <stdio.h>

/**
 * main - print all single numbers separated by commas and spaces, followed
 * by a newline
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
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
