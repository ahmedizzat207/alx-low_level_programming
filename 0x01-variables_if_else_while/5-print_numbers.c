#include <stdio.h>

/**
 * main - print all the 10 base digits
 *
 * Return: always (0)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n < 9)
			printf("%d", n);
		else
			printf("%d\n", n);
		n++;
	}
	return (0);
}
