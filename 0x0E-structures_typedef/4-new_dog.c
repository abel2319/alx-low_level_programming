#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the new dog
 * @age: age of th new dog
 * @owner: -||- owner
 *
 * Return: pointer to a new_dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, t;
	dog_t *ptr_dog = NULL;

	if (name != NULL)
		for (i = 0; name[i] != '\0'; i++)
			;
	if (owner != NULL)
		for (j = 0; owner[j] != '\0'; j++)
			;
	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog)
	{
		ptr_dog->name = malloc(sizeof(char) * i);
		if (ptr_dog->name)
		{
			for (t = 0; t <= i; t++)
				ptr_dog->name[t] = name[t];
			ptr_dog->owner = malloc(sizeof(char) * j);
			if (ptr_dog->owner)
				for (t = 0; t <= j; t++)
					ptr_dog->owner[t] = owner[t];
			else
			{
				free(ptr_dog->name);
				free(ptr_dog);
				return (NULL);
			}
			(*ptr_dog).age = age;
		}
		else
		{
			free(ptr_dog);
			return (NULL);
		}
	}
	return (ptr_dog);
}
