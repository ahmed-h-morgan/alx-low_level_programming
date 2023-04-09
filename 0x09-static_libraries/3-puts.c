#include "main.h"
/**
 *
 *
*/
void _puts(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		_putchar(s + i);
	}
	_putchar('\n');
}
