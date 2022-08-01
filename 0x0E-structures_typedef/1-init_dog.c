#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a fuction that initialiazes a dog struct
 * @d - pointer to store new item
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name, d->age = age, d->owner = owner;
}	
