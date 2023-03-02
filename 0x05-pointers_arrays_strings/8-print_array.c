#include "main.h"
#include <stdio.h>
/**
* print_array-prints n elements of an array of integers, followed by a new line
* @a:reference to an array of integers
* @n:number of elements of the array to be printed
* Return:void
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
printf("%d", a[i]);
printf("\n");
}
