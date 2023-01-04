#include "main.h"
/**
 * _sqrt_recursion-calculates the natural square root of a number
 * @n:an integer input
 * Return:integer
 */
int _sqrt_recursion(int n)
{
	return (_root_finder(n, 1));
}
/**
 * _root_finder-returns the root
 * @i:the root
 * @n:an input integer
 * Return:an integer
 */
int _root_finder(int n, int i)
{
	if (n < 0 || n == 0)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_root_finder(n, i + 1));
	}
}
