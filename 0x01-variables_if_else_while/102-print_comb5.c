#include <stdio.h>

/**
 * main - print all possible combination two-two digits that separated by
 * a space and end by a comma and a space, followed by a newline
 *
 * Return: always (0)
 */
int main(void)
{
	int t1;
	int n1;
	int t2;
	int n2;

	t1 = 48;
	while (t1 <= 57)
	{
		n1 = 48;
		while (n1 <= 57)
		{
			if (n1 == 57)
				t2 = t1 + 1;
			else
				t2 = t1;
			while (t2 <= 57)
			{
				if (t2 == t1)
					n2 = n1 + 1;
				else
					n2 = 48;
				while (n2 <= 57)
				{
					putchar(t1);
					putchar(n1);
					putchar(' ');
					putchar(t2);
					putchar(n2);
					if (!((t1 == 57) && (n1 == 56)))
					{
						putchar(',');
						putchar(' ');
					}
					n2++;
				}
				t2++;
			}
			n1++;
		}
		t1++;
	}
	putchar('\n');
	return (0);
}
