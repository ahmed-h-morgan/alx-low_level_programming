#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string char.
 * Return: printed string
*/

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) != '\0')
	{
		_putchar(*s + i);
		i++;
		_puts_recursion(char *s);
	}
	else
	{
		return;
	}
	_putchar('\n');
}
