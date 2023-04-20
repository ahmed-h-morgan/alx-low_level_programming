#include "3-calc.h"
#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument.
 * Return: A pointer to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	if (*s == '+')
	{
		return (&op_add);
	}
	else if (*s == '-')
	{
		return (&op_sub);
	}
	else if (*s == '*')
	{
		return (&op_mul);
	}
	else if (*s == '/')
	{
		return (&op_div);
	}
	else if (*s == '%')
	{
		return (&op_mod);
	}
	else
	{
		return (NULL);
	}
}
