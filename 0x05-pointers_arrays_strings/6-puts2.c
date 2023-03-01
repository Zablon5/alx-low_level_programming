#include "main.h"
/**
* puts2-prints every other character of a string, starting 
* with the first character, followed by a new line
* @str:reference to string input
* Return:void
*/
void puts2(char *str)
{
int i = 0 ,j = 0;
while (str[i] != '\0')
{
i++;
}
_putchars(str[j]);
while (j < i - 3)
{
_putchars(str[j + 2];
j++;
}
_putchars('\n');
}
