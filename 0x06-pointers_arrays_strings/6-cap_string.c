#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			     '"', '(', ')', '{', '}'};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - 32;
			capitalize_next = 0;
		}
		else if (is_separator(*ptr))
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		ptr++;
	}

	return (str);
}
