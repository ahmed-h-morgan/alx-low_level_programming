#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: 0 successful
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);
	return (p);
}
