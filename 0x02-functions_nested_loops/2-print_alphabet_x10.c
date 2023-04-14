#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0 if successful
*/
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
		/*_putchar('\n');*/
	}
	/*_putchar('\n');*/
}
