#include <stdio.h>

/**
 * main - print the lowercase alphabet and then the uppercase and then newline
 *
 * Return: always (0)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
