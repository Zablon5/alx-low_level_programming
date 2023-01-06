#include "main.h"

/**
 * _memset - sets a memory
 * @s: pointer to string
 * @b: input character
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
