#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string char.
 * Return: printed string
*/

void _puts_recursion(char *s)
{
	int i;
	/*char c;*/

	i = 0;
	/*c = *s;*/
	if (*(s + i) != '\0')
	{
		_putchar(*s + i);
		i++;
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
	}
	/*_putchar('\n');*/
}
