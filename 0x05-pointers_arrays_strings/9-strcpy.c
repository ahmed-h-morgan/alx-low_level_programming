#include "main.h"

/**
 * _strcpy - a function that copies the string
 * @src: the string
 * @dest: a pointer to the new string
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src != '\0')
	{
		len++;
		src++;
	}
	src -= len;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
/**
 * write your mistakes in a paper outside to avoid repeating it in the future
 *
*/
