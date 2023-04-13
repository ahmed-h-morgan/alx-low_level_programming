#include <stdlib.h>
#include <string.h>

/**
 * str_concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 successful
*/

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *new_str;

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
	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, len2 + 1);
	return (new_str);
}
