#include "main.h"

/**
 * _strcat - a function concatenates two strings.
 * @dest: the first stirng
 * @src: the second string to be added at the end of dest
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int total, i;

	/* count the lens of first str*/
	/* move the pointer to the end of first str */
	while (*dest != '\0')
	{
		len1++;
		dest++;
	}
	/* calc the lens of second str */
	/* move the point to end of second str */
	while (*src != '\0')
	{
		len2++;
		src++;
	}
	/* move the pointer 1 step back */
	/* to be ready to add the next str */
	dest--;
	total = len2 + len1;
	/* copy the next str at the end of first str */
	for (i = 0; i <= total; i++)
	{
		dest
	}
}
