#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 *
 * Return: always (0)
 */
int main(void)
{
	int n;
	int s;

	n = 48;
	while (n < 57)
	{
		s = n + 1;
		while (s <= 57)
		{
			putchar(n);
			putchar(s);
			if (n < 56)
			{
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
