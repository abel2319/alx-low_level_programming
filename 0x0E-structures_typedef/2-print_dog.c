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
		if (name)
			pritnf("%s\n", d.name);
		else
			printf("nil\n");

		printf("%lf\n", (*d).age);

		if (owner)
			printf("%s\n", d.owner);
		else
			printf("nil\n");
	}
}
