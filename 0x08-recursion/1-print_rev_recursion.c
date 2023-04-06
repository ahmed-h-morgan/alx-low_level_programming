#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: printed string
*/

void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	if (*(s + i) <= '\0' && j == 0)
	{
		if (*s == '\0')
		{
			j = 1;
		}
		else if (*s != '\0')
		{
			i++;
		}
	}
	if (i >= 0)
	{
		_putchar(*(s + i));
		i--;
		_print_rev_recursion(s + i);
	}
}
