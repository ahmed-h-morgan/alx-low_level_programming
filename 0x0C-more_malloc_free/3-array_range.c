#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: start
 * @max: end
 * Return: 0 successful
*/

int *array_range(int min, int max)
{
	int *arr = NULL, *p = NULL;
	size_t size = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	p = arr;
	while (p < arr + size)
	{
		*p = min++;
		p++;
	}
	return (arr);
}
