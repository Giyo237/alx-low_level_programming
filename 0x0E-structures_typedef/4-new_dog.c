#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* *new_dog - function that creates a new dog
* @name: pointer to struct dog
* @age: pointer to struct dog
* @owner: pointer to owner field
* Return: new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n_name, *n_owner;
	int l = 0, ol = 0, i;

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	while(name[l] != '\0')
	{
		l++;
	}
	n_name = malloc(sizeof(l + 1));
	if (n_name == NULL)
	{
		free(new_dog);
		return(NULL);
	}
	for (i = 0; i <= l; i++)
	{
		n_name[i] = name[i];
	}
	while (owner[ol] != '\0')
	{
		ol++;
	}
	n_owner = malloc(sizeof(ol + 1));
	if (n_owner == NULL)
	{
		free(n_name);
		free(new_dog);
		return(NULL);
	}
	for (i = 0; i <= ol; i++)
	{
		n_owner[i] = owner[i];
	}

	new_dog->name = n_name;
	new_dog->age = age;
	new_dog->owner = n_owner;


	return (new_dog);
}
