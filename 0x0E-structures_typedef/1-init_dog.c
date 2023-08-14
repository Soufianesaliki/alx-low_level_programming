#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: pointer to a variable of type dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
