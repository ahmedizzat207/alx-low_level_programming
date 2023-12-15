#include <unistd.h>

/**
 * main - write a string to the standard error without printf or put
 *
 * Return: (1)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, message, strlen(message));
	return (1);
}
