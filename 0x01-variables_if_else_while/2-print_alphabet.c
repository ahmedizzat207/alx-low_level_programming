#include <stdio.h>

/**
 * main - print the alphabet in lower case and a newline after thata
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
	putchar('\n');
	return (0);
}
