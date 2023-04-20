#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name
 * @name: the name
 * @f: a pointer to a func
 *
 * Return: 0 successful
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
