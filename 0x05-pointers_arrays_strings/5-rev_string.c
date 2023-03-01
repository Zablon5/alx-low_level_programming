#include "main.h"
/**
 * rev_string-reverses a string
 * @s:a reference to input string
 * Return:void
 */
void rev_string(char *s)
{
int i = 0, j = 0;
while (s[i] != '\0')
{
i++;
}
while (j < i)
{
s[j] = s[i];
j++;
i--;
}
}
