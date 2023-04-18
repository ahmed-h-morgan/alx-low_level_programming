#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * @dog *d: the struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 * @d: the struct
 * Return - 0 suceesful
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
