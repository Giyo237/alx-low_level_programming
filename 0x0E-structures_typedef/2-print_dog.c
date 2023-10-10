#include <stdio.h>
#include "dog.h"
/**
* print_dog - function that that prints a struct dog
* @d: pointer to struct dog
* it prints the fields of the struct dog
* Name: <name>
* Age: <age>
* Owner: <owner>
* Return: nil if fields are empty
*/
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d == NULL)
	{
		return;
	}

	name = d->name != NULL ? d->name : "(nil)";
	age = d->age;
	owner = d->owner != NULL ? d->owner : "(nil)";

	printf("Name: %s\n", name);
	printf("Age: %.6f\n", age);
	printf("Owner: %s\n", owner);
}
