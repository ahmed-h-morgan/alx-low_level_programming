#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers @arcv: string
 * @argc: the count of argument's word
 * @argv: the string
 * Return: (0) is successful
*/

int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	printf("%d\n", arg1 * arg2);
	return (0);
}
