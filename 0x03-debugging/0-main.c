#include "main.h"
/**
 * main - tests function that prints if integer is positive or negative
 * Function (positive_or_negative) : retun a feedback
 * Parameter (i) -  is a tested number
 * Return: 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
