#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print informatrions about a dog d
 * @d : whose we print informations
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");

		if ((*d).age >= 0)
			printf("Age: %f\n", (*d).age);
		else
			printf("(nil)\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
