#include <stdlib.h>
/**
 * failed - to free which were allocate
 *@count: nbr of lines allocated
 *@ptr: grid
 *
 */
void failed(int count, char **ptr)
{
	int j = 0;

	for (j = 0; j < count; j++)
		free(ptr[j]);
	free(ptr);
}

/**
 * fill - fill each line
 * @i: where we are in str
 * @j: size of the words
 * @str: string
 * @ptr: grid
 *
 */
void fill(int i, int j, char *str, char **ptr)
{
	int t = 0;

	for (t = (i - j); t <= i; t++)
	{
		if (str[i + 1] == '\0')
			(*ptr)[i + 1] = '\0';
		else if (str[t] == ' ')
			(*ptr)[t] = '\0';
		else
			(*ptr)[t] = str[t];
	}
}
/**
 *strtow - split a string into words(using spaces as delimiter)
 *@str: string to split
 *
 * Return: pointer to an array of strings(words)
 * Or NULL if str=NULL or str=="" and if something goes wrong
 */
char **strtow(char *str)
{
	char **ptr = NULL;
	int i = 0, j = 0, nbr_words = 1, count = 0;

	if (str != NULL || *str != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
			if (str[i] == ' ' && str[i + 1] != '\0')
				nbr_words++;
		ptr = malloc(sizeof(char *) * nbr_words);
		if (ptr)
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				j++;
				if (str[i] == ' ' || str[i + 1] == '\0')
				{
					ptr[count] = malloc(sizeof(char) * (j + 1));
					if (!ptr[count])
					{
						failed(count, ptr);
						return (NULL);
					}
					fill(i, j, str, ptr);
					j = 0;
					count++;
				}
			}
		}

	}
	return (ptr);
}
