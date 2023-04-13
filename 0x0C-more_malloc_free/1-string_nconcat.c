#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: 0 is successful
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0, len2 = 0;
	char *result = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';
	return (result);
}
