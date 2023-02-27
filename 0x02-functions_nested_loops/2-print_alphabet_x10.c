#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i = 0;

while (i < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
i++;
}
}

