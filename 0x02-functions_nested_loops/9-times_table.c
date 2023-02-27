#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
    int i = 0, j = 0, product;

    while (i <= 9)
    {
        j = 0;
        while (j <= 9)
        {
            product = i * j;
            if (j == 0)
                _putchar('0');
            else if (product < 10)
            {
                _putchar(' ');
                _putchar(product + '0');
            }
            else
            {
                _putchar((product / 10) + '0');
                _putchar((product % 10) + '0');
            }
            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
            j++;
        }
        _putchar('\n');
        i++;
    }
}

