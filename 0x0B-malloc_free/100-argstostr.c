#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments past to the program
 * @ac: number of arguments
 * @av: table that contains the arguments
 *
 * Return: pointer to string where all arguments will be concatenated
 * Or NULL if ac=0 or av=NULL and if somethings goes wrong
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i = 0;
	int j = 0;
	int ptr_size = 0;

	if (ac != 0 && av != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr_size++;
				if (av[i][j + 1] == '\0')
					ptr_size++;
			}
		}
		ptr = malloc(sizeof(char) * (ptr_size + 1));
		if (ptr)
		{
			for (i = 0; i < ptr_size; i++)
			{
				if ((*av)[i] == '\0')
					ptr[i] = '\n';
				else
					ptr[i] = (*av)[i];
			}
			ptr[i] = '\0';
		}
	}
	return (ptr);
}
