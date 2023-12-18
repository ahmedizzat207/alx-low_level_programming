#include <stdio.h>

/**
 * main - print the lowercase alphabet reversed followed by a newline
 *
 * Return: always (0)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
