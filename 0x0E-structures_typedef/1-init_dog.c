#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - a fuction that initialiazes a dog struct
 * struct dog *d - name of struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d = {
