#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * append_text_to_file - The function appends text at the end of a file
 * @filename: a constent pointer to character (string) contain the file new to
 * append the text to
 * @text_content: a pointer to character (string) contain the text to append
 * to the file
 *
 * Return: a integer either 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int charcount, file, failnum;

	if (!filename)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		charcount = strlen(text_content);
		failnum = write(file, text_content, charcount);
		printf("%d\n", failnum);
		if (failnum != charcount)
			return (-1);
	}
	return (1);
}
