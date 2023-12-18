#include <stdio.h>

/**
 * main - print lowercase alphabets exept 'q' and 'e' and a newline after that
 *
 * Return: always (0)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 122)
	{
		if (!((c == 'q') || (c == 'e')))
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
