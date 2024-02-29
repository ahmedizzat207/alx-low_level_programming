#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define READ 1024

/**
 * main - The function copies the content of a file to another file
 * @argc: an integer represent the arguments count
 * @argv: a pointer to a pointer to character (string) contain all the passed
 * arguments (argument vector)
 *
 * Description: The function copies the content of a file to another file via
 * UNIX cp command as this (cp file_from file_to).if the arguments count is not
 * correct exit with code 97 and print (cp file_from file_to).
 *
 * Return: an integer represent the function success when 0, and fail if
 * anything else returned
 */

int main(int argc, char **argv)
{
	char buffer[READ];
	int filefrom, fileto, charcount, errorfrom, errorto;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00600 | 00060 | 00006);
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (fileto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	for (charcount = READ; charcount == READ;)
	{
		charcount = write(fileto, buffer, read(filefrom, buffer, READ));
	}
	errorfrom = close(filefrom);
	errorto = close(fileto);
	if (errorfrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	else if (errorto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	return (0);
}
