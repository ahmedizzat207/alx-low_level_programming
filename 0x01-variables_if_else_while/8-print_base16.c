#include <stdio.h>

/**
 * main - print all numbers of base16 in lowercase, followed by a newline
 *
 * Return: always (0)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
