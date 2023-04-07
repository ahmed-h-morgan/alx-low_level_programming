#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: printed string
*/

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	i++;
	_print_rev_recursion(s + i);
	_putchar(*s);
}
