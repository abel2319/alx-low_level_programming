#include <stdlib.h>

/**
 *_strdup - copies string past in argument to another space in memory
 *@str: string copied
 *
 * Return: pointer to the copy of string, NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int i = 1;
	int j = 0;

	if (!str)
	{
		for (i = 1; *str; i++, s++)
			;
		ptr = malloc(sizeof(char) * i);
		if (ptr)
		{
			for (j = 0; j < i; j++)
				ptr[j] = str[j];
			return (ptr);
		}
	}
	return (ptr);

}
