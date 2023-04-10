#include <stdio.h>

/**
 * main - it prints the number of argument
 * @argc: the count of argument's word
 * @argv: the string
 * Return: (0) is successful
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, num;

	num = 0;
	for (i = 1; i < argc; i++)
	{
		num++;
	}
	printf("%d\n", num);
	return (0);
}
