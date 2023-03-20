#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start, end;

	start = 'a';
	end = 'z';
	while (start <= 'a' && end <= 'z')
	{
		putchar(start);
		start++;
	}
	return (0);
}
