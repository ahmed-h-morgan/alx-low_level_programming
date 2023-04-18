#ifndef DOGS_H
#define DOGS_H

/**
 * struct dog - this is the struct
 * @name: the name of dog
 * @age: the age of it
 * @owner: the owner
 * Description: this is the dog struct
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Declare any functions you want to use with struct dog here */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
