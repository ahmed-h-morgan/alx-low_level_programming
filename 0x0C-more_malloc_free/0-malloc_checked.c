#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: a number
 * Return: 0 successful
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (p);
}
