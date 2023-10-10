#include <stddef.h>
#include "dog.h"

/**
* init_dog - function that initializes a variabke
* @d: pointer to struct
* @name: pointer to strct name
* @age: pointer to stut age
* @owner: pointer to struct owner
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
