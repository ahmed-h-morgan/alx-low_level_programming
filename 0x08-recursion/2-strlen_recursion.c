#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: lenth
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) < '\0')
	{
		i++;
		_strlen_recursion(s + i);
	}
	return (i);
}
