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
 * @r:the root
 * @n:an input integer
 * Return:an integer
 */
int _root_finder(int n, int r)
{
	if (n < 0 || r * r > n)
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
	}
	return (_root_finder(n, r + 1));
}
