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
	int i = 0;
	int j = 0;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		ptr = malloc(sizeof(char) * (i + 1));
		if (ptr)
		{
			for (j = 0; j <= i; j++)
				ptr[j] = str[j];
			return (ptr);
		}
	}
	return (ptr);

}
