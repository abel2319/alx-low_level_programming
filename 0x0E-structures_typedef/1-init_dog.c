#include "dog.h"

/**
 * init_dog - initialize a varieble of type dog
 * @d : dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
