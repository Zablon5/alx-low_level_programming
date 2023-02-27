#include "main.h"

void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar('0');
else
{
int res = i * j;

_putchar(',');
_putchar(' ');

if (res < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res >= 10 && res < 100)
{
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
else
{
_putchar(res / 100 + '0');
_putchar(res % 100 / 10 + '0');
_putchar(res % 10 + '0');
}
}
}
_putchar('\n');
}
}
