#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: printed string
*/
void string_end(int i, int j, char *s);
void _print_rev_recursion(char *s)
{
	int i, j;
	/*char c;*/

	i = 0;
	j = 0;
	if (j == 0)
	{
		string_end(i, j, s);
	}
	else if (i >= 0 && j > 0)
	{
		_putchar(*s + i);
		i--;
		_print_rev_recursion(s + i);
	}
}
void string_end(int i, int j, char *s)
{
	/*char *s;*/
	if (*s != '\0')
	{
		*s = *(s + i);
		i++;
		string_end(i, j, s);
	}
	else
	{
		j += 1;
	}
	/*return (j)*/
}
