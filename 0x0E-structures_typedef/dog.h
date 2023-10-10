#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - a structure that collects data of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: of the dog
 * this structure helps collectt data of a dog with the help of
 * variables name age owner
 * the name and owner fields are ponters to character array
 * which is use to store strings
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*MAIN_H*/
