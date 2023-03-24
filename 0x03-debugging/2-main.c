#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*
*/

int largest_number(int a, int b, int c);

int main(void)
{
	int a, b, c;
	int largest;

	a = 98;
	b = 98;
	c = 1;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
