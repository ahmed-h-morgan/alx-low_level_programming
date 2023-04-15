#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * Return: 0 successful
*/
void jack_bauer(void)
{
	int min;

	min = 00;
	min += 1;
	printf("%d\n", min);
}
