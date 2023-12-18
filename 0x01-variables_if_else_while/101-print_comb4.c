#include <stdio.h>

/**
 * main - print all possible different combination of three digits
 *
 * Return: always (0)
 */
int main(void)
{
	int h;
	int t;
	int o;

	h = 48;
	while (h < 56)
	{
		t = h + 1;
		while (t < 57)
		{
			o = t + 1;
			while (o <= 57)
			{
				putchar(h);
				putchar(t);
				putchar(o);
				if (h < 55)
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			t++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
