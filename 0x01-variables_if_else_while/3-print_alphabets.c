#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, Y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (Y = 'A'; Y <= 'Z'; Y++)
	{
		putchar(Y);
	}

	printf("\n");
	return (0);
}
