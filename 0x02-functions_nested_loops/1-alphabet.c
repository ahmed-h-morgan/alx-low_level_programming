#include "main.h"

/**
 * print_alphabet - print alphabet a-z
 * Return: 0 successful
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
