#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a list_t list.
 * @h: pointer to the list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (!(h -> str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h -> len, h -> str);
		}
		h = h -> next;
		len++;
	}
	return (len);
}
