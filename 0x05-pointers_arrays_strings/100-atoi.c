#include "main.h"
#include <stdio.h>
/**
* _atoi-convert a string to an integer.
* @s:reference to input string
* @nn:negative sign counter
* Return: integer
*/
int _atoi(char *s)
{
int nn = 0;
int len = 0;
int i = 0;
unsigned int ans = 0;
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
ans = (ans * 10) + (s[i] - '0');
len++;
}
else if (len > 0)
{
break;
}
else if (s[i] == '-' && len == 0)
{
nn++;
}
if (nn % 2 != 0)
{
ans = -ans;
}

i++;
}
return (ans);
}
