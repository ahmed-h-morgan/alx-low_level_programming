#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: an int
 * @y: an int
 * Return: the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else if (y > 0)
		{
		x *= x;
		y--;
		_pow_recursion(x, y);
		}
	}
	return (x);
}
