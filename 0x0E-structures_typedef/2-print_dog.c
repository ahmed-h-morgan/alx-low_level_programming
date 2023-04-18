#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog
 * @d: the struct
 * Return: 0 successful
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	/*printf("Name: %s\n", d->name ? d->name : "(nil)");*/
	/*printf("Age: %.1f\n", d->age);*/
	/*printf("Owner: %s\n", d->owner ? d->owner : "(nil)");*/
}
