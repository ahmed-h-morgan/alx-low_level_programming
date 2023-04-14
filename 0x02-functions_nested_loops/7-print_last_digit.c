#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer
 * Return: 0 successful
*/
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	i = i % 10;
	_putchar (48 + i);
	return (0);
}
