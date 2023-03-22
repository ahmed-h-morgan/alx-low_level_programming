#include "main.h"
/**
 * _putchar - writes the character c to stdout.
 *
 * printalphabet() - prints alpabet characters.
 *
 * Return: no return
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
