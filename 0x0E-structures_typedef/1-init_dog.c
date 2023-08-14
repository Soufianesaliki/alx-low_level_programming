#include "dog.h"
#include <stdio.h>
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
	int i, len;

	for (i = 0; name[i]; i++)
		len++;
	d->name = (char *)malloc(sizeof(char) * (len + 1));
	if (d->name == NULL)
		return;
	len = 0;
	for (i = 0; owner[i]; i++)
		len++;
	d->owner = (char *)malloc(sizeof(char) * (len + 1));
	if (d->owner == NULL)
		return;
	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	printf("%s\n", d->name);
	d->age = age;
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
}
