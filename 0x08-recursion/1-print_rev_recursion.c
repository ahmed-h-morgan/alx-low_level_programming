#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * @i: start
 * @j: end if str
 * Return: printed string
*/

int string_end(int i, int j, char *s);
void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	if (j == 0)
	{
		j = string_end(i, j, s);
	}
	else
		if (i >= 0 && j > 0)
		{
			_putchar(*s + i);
			i--;
			_print_rev_recursion(s - i);
		}
}
/**
 * string_end - the end of str
 * @i: the rev starting point
 * @j: the str end point
 * @s: the string
 * Return: Return(0)
 *
*/
int string_end(int i, int j, char *s)
{
	if (*(s + i) != '\0')
	{
		/*printf("%c \n", *s);*/
		i++;
		string_end(i, j, s);
	}
	else
	{
		j += 1;
		/*return (i j);*/
	}
	return (j);
	_print_rev_recursion(s + i);
}

