#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

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
	fileto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00600 | 00060 | 00004);
	filefrom = open(argv[1], O_RDONLY);
	check(98, argv[1], filefrom < 0);
	check(99, argv[2], fileto < 0);
	for (charcount = READ; charcount == READ;)
	{
		errorfrom = read(filefrom, buffer, READ);
		charcount = write(fileto, buffer, errorfrom);
	}
	errorfrom = close(filefrom);
	errorto = close(fileto);
	check(100, argv[1], errorfrom < 0);
	check(100, argv[2], errorto < 0);
	return (0);
}

/**
 * check - The function checks for successful excution of open, read, write
 * and close system calls
 * @sysvalue: a long integer represent the value of returned by the system call
 * @filename: a pointer to character (string) that contain the filename
 * @status: a boolen expresstion express the need to enter the conditions
 * either true or false
 *
 * Return: a integer represent the value of exiting in any condition found to
 * be true, or 0 if all are false
 */

int check(ssize_t sysvalue, char *filename, bool status)
{
	if (status && sysvalue == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (sysvalue);
	}
	else if (status && sysvalue == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(sysvalue);
	}
	else if (status && sysvalue == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(sysvalue);
	}
	else if (status && sysvalue == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(sysvalue);
	}
	else
	{
		return (0);
	}
}
