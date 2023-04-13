#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a copy of the string given as a parameter.
 * @str: the old string
 * Return: 0 successful
*/

char *_strdup(char *str)
{
	size_t len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, str, len);
	return (new_str);
}
