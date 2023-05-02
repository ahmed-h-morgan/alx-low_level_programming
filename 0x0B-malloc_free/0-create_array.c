#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: the size of array
 * @c: the initialized char
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	/*char *c;*/
	char *p;

	p = &c;
	p = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	return (p);

}
