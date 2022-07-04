#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - Short description
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
