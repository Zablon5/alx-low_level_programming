#include "main.h"
/**
 * rev_string-reverses a string
 * @s:a reference to input string
 * Return:void
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char var1,var2;
while (s[i] != '\0')
{
i++;
}
while (j < i)
{
var1 = s[j];
var2 = s[i - 1]
s[j] = var2;
s[i - 1] = var1;
j++;
i--;
}
}
