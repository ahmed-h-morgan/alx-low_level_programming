#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - multiplies two positive numbers.
 *
 * Return: 0 successful
*/

int main(int argc, char **argv)
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
	{
	printf("Error: Invalid number of arguments\n");
	printf("Usage: mul num1 num2\n");
	return (1);
	}
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error: Invalid arguments\n");
		printf("Usage: mul num1 num2\n");
		return (1);
	}

	multiply(num1, num2);
	return (0);
}
