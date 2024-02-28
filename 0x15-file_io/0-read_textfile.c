#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - The function reads a text file and prints it to the POSIX
 * standard output
 * @filename: a constent pointer to character (string) that contain filename
 * path to be read and printed to the standard output
 * @letters: a number of type size_t that represent the letters which should be
 * printed
 *
 * Return: the number of letters it read or printed by write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t num;
	int file, failnum;

	failnum = 0;
	if (!filename)
	{
		write(STDOUT_FILENO, "", failnum);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		write(STDOUT_FILENO, "", failnum);
		return (0);
	}
	text = malloc(sizeof(*text) * letters);
	if (!text)
		return (0);
	num = write(STDOUT_FILENO, text, read(file, text, letters));
	close(file);
	if (num <= (ssize_t)strlen(text))
		return (num);
	else
		return (0);
}
