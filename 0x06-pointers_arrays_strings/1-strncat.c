#include "main.h"

/**
 * *_strncat - concatenate two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes to use from src
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && n > k)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	if (n > 0)
		dest[i] = '\0';

	return (dest);
}
