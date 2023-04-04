#include "main.h"
#include <string.h>

/**
 * _memset - function fills the constant byte
 * @n: bytes of the memory area
 * @s: the pointer to the buffering memory area
 * @b: the constant byte
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
