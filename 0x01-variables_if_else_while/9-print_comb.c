#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 9)
		{
			putchar('0' + x);
		}
		else
		{
			putchar('0' + x);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
