#include "main.h"
/**
 * _strlen-a function that return length of a string
 * @s:pointer to string
 * Return:integer
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
