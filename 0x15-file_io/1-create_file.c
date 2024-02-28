#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - The function creates a file
 * @filename: a constent pointer to character (string) that conatain the file
 * name to create
 * @text_content: a pointer to character (string) that should be included in
 * the new created file
 *
 * Return: 1 on success, or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int charcount, file, failnum;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY,  S_IRUSR | S_IWUSR);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		charcount = strlen(text_content);
		failnum = write(file, text_content, charcount);
		if (failnum != charcount)
			return (-1);
	}
	else
	{
		write(file, text_content, 0);
	}
	return (1);
}
