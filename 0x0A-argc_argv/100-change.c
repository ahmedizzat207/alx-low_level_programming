#include <stdio.h>
#include <stdlib.h>

int change_cal(int m);

/**
 * main - a program that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always (0) if there is exactly one argument, otherwise return (1)
 */

int main(int argc, char *argv[])
{
	int change;
	int money;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money > 0)
		{
			change = change_cal(money);
			printf("%d\n", change);
		}
		else
		{
			printf("0\n");
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * change_cal - calculate the minimum number of coins to make change for an
 * amount of money
 * @m: the amount of money to make change for
 *
 * Return: the number of coins
 */

int change_cal(int m)
{
	int c;

	c = 0;
	c += (m / 25);
	if (m % 25 != 0)
	{
		m -= ((m / 25) * 25);
		c += (m / 10);
		if (m % 10 != 0)
		{
			m -= ((m / 10) * 10);
			c += (m / 5);
			if (m % 5 != 0)
			{
				m -= ((m / 5) * 5);
				c += (m / 2);
				if (m % 2 != 0)
					c++;
			}
		}
	}
	return (c);
}
