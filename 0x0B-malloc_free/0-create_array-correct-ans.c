#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size
 * @c: the character
 * Return: 0 successful
*/
char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	mem = malloc(sizeof(char) * size);
	if (mem == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mem[i] = c;
	}
	return (mem);
}
