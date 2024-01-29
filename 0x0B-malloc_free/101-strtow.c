#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int wordscount(char *str);
int wordscharcount(int word, char *str);
char charalloc(int charnum, int wordnum, char *str);

/**
 * strtow - The function splits a string into words
 * @str: the string to separate into words
 *
 * Return: a pointer to an array of strings word, if failed return NULL
 */

char **strtow(char *str)
{
	int *wordchar;
	int totalwords, wordnum, charnum;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	totalwords = wordscount(str);
	wordchar = malloc(totalwords * sizeof(*wordchar));
	if (wordchar == NULL)
		return (NULL);
	for (wordnum = 0; wordnum < totalwords; wordnum++)
	{
		wordchar[wordnum] = wordscharcount(wordnum, str);
	}
	ptr = malloc(totalwords * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (wordnum = 0; wordnum < totalwords; wordnum++)
	{
		ptr[wordnum] = malloc((wordchar[wordnum] + 1) * sizeof **ptr);
		if (ptr[wordnum] == NULL)
			return (NULL);
		for (charnum = 0; charnum < wordchar[wordnum]; charnum++)
		{
			ptr[wordnum][charnum] = charalloc(charnum, wordnum, str);
		}
		ptr[wordnum][charnum] = '\0';
	}
	return (ptr);
}

/**
 * wordscount - The function counts the number of words in the string
 * @str: The string to count it's words
 *
 * Return: The number of words
 */

int wordscount(char *str)
{
	int i;
	int words;

	words = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}

/**
 * wordscharcount - The function counts the number of characters in the given
 * word number in the given string
 * @word: the word number
 * @str: the given string
 *
 * Return: The number of character in the word
 */

int wordscharcount(int word, char *str)
{
	int i;
	int wordnum;
	int charnum;

	wordnum = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (charnum = 1; str[i] != ' ' && str[i] != '\0'; charnum++)
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			
				wordnum++;
			/**
			 * Just changing this condition from word to (word + 1) took me half an hour
			 * of thinking why the program isn't working as it should be and it changed
			 * all the outcome.
			 */
			if (wordnum == (word + 1))
			{
				return (charnum);
			}
			i++;
		}
	}
	return (charnum);
}

/**
 * charalloc - The function allocate the right character with it's number and
 * the word's number
 * @charnum: The number of the character in the word
 * @wordnum: The number of the word in the string
 * @str: The string
 *
 * Return: The character with the index [wordnum][charnum]
 */

char charalloc(int charnum, int wordnum, char *str)
{
	int i;
	int charcount;
	int wordcount;

	wordcount = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (charcount = 0; str[i] != ' ' && str[i] != '\0'; charcount++)
		{
			if ((wordcount == wordnum) && (charcount == charnum))
				return (str[i]);
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				wordcount++;
			i++;
		}
	}
	return (str[i]);
}
