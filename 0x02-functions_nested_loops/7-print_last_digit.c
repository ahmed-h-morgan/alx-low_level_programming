#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer
 * Return: 0 successful
*/
int print_last_digit(int i)
{
	int d;

	if (i < 0)
	{
		i *= -1;
	}
	d = i % 10;
	/*_putchar(d);*/
	return (d);
}
