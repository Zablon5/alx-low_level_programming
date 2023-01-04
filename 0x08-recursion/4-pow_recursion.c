#include "main.h"
/**
 * _pow_recursion-returns the power of a number
 * @x:integer to be powered
 * @y:integer that powers an integer
 * Return:integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
