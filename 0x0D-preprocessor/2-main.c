#include <stdio.h>

/**
 * main - The function prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: always (0) if succesfully excuted
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
