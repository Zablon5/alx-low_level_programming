#include "main.h"
/**
* puts_half-prints half of a string, followed by a new line
* @str:a reference to string input
* Return:void
*/
void puts_half(char *str)
{
int i = 0, len = 0;
while (str[i] != '\0')
{
i++;
}
len = (i - 1) / 2;
while (str[len + 1] != '\0')
{
_putchar(str[len + 1]);
len++;
}
_putchar('\n');
}
