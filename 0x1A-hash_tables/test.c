#include "hash_tables.h"

int main ()
{
	char **array = calloc(3, sizeof(char*));
	array[0] = malloc(sizeof(char));
	array[0] = "42";
	array[2] = "";
	printf("%s %p %p",array[0], array[1], array[2]);
	free(array);
}
