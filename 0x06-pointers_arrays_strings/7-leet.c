#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = numbers[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
