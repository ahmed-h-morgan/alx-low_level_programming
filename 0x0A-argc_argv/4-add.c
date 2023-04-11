#include <stdio.h>
#include <stdlib.h>
/**
 * main - it prints the number of argument
 * @argc: the count of argument's word
 * @argv: the string
 * Return: (0) is successful
*/
int main(int argc, char *argv[])
{
	int total, i;

	total = 0;
	i = 0;
	if (argc == 1)
	{
		printf("%d\n", argc);
		return (0);
	}
	/*int num = atoi(argv[i]);*/
	for (i = 0; i <= (argc - 1); i++)
	{
		if (*argv[i] <= '0' && *argv[i] >= '9')
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
	}
	return (0);
}
