#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: strint 2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
return (s1[0] - s2[0]);
}
