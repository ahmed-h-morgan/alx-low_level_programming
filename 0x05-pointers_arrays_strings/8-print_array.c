#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to array of int
 * @n: the number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
			return;
		}
		printf("%d, ", a[i]);
		i++;
	}
}
