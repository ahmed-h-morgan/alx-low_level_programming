#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * print_error_and_exit - check error
 *
*/

void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * check_valid_number - check valid num
 * @num: the number
 * Return: 0 in error
*/

void check_valid_number(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
		{
			print_error_and_exit();
		}
	}
}
/**
 * multiply - multiply numbers
 * @num1: the first nuber
 * @num2: the second number
 * Return: multiplied num
*/
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result = NULL;
	int i, j, carry, sum;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error: Memory allocation failed\n");
		exit(1)
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] = carry;
	}
	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
	{
		i++;
	}
	for (; i < len1 + len2; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}
