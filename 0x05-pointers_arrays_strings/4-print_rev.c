#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string we want to reverse
 * Return: the reversed string
*/
void print_rev(char *s)
{
	int i = 0;
	int r;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	/* the above func will end at the pointer save the address of null item */
	/* so when the prog found that the value of the address stored */
	/*in the pointers equal null */
	/* the prog terminate the while loop above */
	s--;
	/* the above line move the pointer one step back from the current position */
	/* which is now on the address of null */
	/*to be pointing to the last char of string */
	for (r = i; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	/* the loop above starts at the end value of the int i */
	/* (to determine num of rounds of this loop) */
	/* then we decrease this num by 1 after every round of the loop */
	/* inside this loop we (print) the value stored in the pointed address */
	/* starting from the address before null */
	/* (according last position of pointer) */
	/* (which has been updated by the s-- before this loop started) */
	/* then we move the pointer one step back to print the new char */
	/* (till the num of rounds be 0) */
	/* when the number of rounds = 0 then the loop terminated */
	_putchar('\n');
}
