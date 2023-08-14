#include "dog.h"
#include <stdlib.h>

/**
 * len_str - count lenght of a string
 * @str: string
 * Return:	lenght of str
 *		-1 if failed
 */

int len_str(char *str)
{
	int i, len = 0;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
		len++;
	return (len);
}

/**
 * cpy_str - copies a string to another
 * @src: string
 * @dest: string
 * Return: nothing
 */

void cpy_str(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 * Return:	dog_t variable
 *		NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len;
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len = len_str(name) + 1;
	new_dog->name = (char *)malloc(sizeof(char) * len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	len = len_str(owner) + 1;
	new_dog->owner = (char *)malloc(sizeof(char) * len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	cpy_str(name, new_dog->name);
	cpy_str(owner, new_dog->owner);
	new_dog->age = age;
	return (new_dog);
}
