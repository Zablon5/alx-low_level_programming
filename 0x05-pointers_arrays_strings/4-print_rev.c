#include "main.h"
/**
 * print_rev-prints a string, in reverse, followed by a new line
 * @s:reference to string input
 * Return:void
 */
void print_rev(char *s)
{
int len;
len = _strlen(s);
while (len != 0)
{
_putchar(s[len - 1]);
len--;
}
_putchar('\n');
}
