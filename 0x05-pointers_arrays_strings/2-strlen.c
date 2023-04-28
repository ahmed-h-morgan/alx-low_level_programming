#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * @s: a pointer to the string
 * Return: the num of char in string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
