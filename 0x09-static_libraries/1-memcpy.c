#include "main.h"

/**
 * _memcpy - copy source string to destiation
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
