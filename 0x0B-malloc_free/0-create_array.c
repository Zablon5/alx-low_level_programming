#include "main.h"
#include <stdlib.h>
/**
 * create_array-creates an array of chars
 * @size:size of the input array
 * @c:the character
 * Return:a pointer to the array, or NULL if it  fails
 */
char *create_array(unsigned int size, char c)
{
	char *charray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	charray = malloc(sizeof(c) * size);

	if (charray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		charray[i] = c;

	return (charray);
}
