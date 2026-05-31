#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int count = 0;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0' && count < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		count++;
	}

	*ptr = '\0';

	return (dest);
}
