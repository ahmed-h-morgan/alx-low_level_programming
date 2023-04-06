#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: int
 * Return:  square root
*/
int _sqrt_recursion(int n)
{
	if ((n / (n - 1) != 2))
	{
		return (-1);
	}
	else
		return (n / _sqrt_recursion(n - 1));
}
