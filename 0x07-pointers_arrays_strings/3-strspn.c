#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Return: number of bytes in initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (found == 1)
			count++;
		else
			break;

		s++;
	}

	return (count);
}
