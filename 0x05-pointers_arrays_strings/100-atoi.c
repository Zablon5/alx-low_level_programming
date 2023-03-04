#include "main.h"
#include <stdio.h>
/**
* _atoi-convert a string to an integer.
* @s:reference to input string
* Return: integer
*/
int _atoi(char *s)
{
unsigned int ans = 0;
int sign = 1, i = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
ans = (ans * 10) + (s[i] - '0');
i++;
}
ans *= sign;
return (ans);
}
