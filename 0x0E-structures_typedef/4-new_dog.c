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
	dog_t *ptr_dog = NULL;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog)
	{
		ptr_dog->name = name;
		ptr_dog->owner = owner;
		(*ptr).age = age;
		return (ptr_dog);
	}
	return (ptr_dog);
}
