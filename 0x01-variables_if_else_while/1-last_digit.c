#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - identify whether the last digit of a random generated number is greater than 5 or
 * less than 6 and not 0 or is 0
 *
 * Return: always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, n%10);
	if (n > 5)
		printf("greater than 5\n");
	else if (n == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
