#include "main.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 in case
 * (there is one or more chars in the string b that is not 0 or 1)
 * (b is NULL)
*/

unsigned int pow(*base, *index)
{
	/* this func is to calc the power manually*/
	int n, i;
	for (n = 1; n < index; n++)
	{
		
	}
}
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, index, num;
	unsigned int base = 2;
	len = 0;
	num = 0;
	if (b == NULL)
		return(0);
	while(b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return(0);
		len++;
	}

	for(index = 0; len > 0; index++)
	{
		if (b[len - 1] == '1')
		{
			num +=  * (2 ** index);
			/*num += '1' << index;*/
		}
		len--;
	}
	return (num);
}
