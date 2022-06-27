#include <stdlib.h>
/**
 * to_concat - concat
 * @i: size of s1
 * @j: size of s2
 * @s1: first
 * @s2: second
 * @ptr: store
 *
 */
void to_concat(int i, int j, char *s1, char *s2, char **ptr)
{
	int t = 0;

	(*ptr) = malloc(sizeof(char) * (i + j));
	if (ptr)
	{
		for (t = 0; t <= (i + j - 1); t++)
		{
			if (t <= i)
			{
				if (t == i)
					(*ptr)[t] = s2[0];
				else
					(*ptr)[t] = s1[t];
			}
			else
				(*ptr)[t] = s2[t - i];
		}
	}
}

/**
 *str_concat - concatane the two strings paste as arguments
 *@s1: first string
 *@s2: second string
 *
 * Return: Pointer of new string
 * Or NULL if one of strings is NULL or  allocation failed
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int i = 0;
	int j = 0;
	char *rtn = '\0';

	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		for (j = 0; s2[j] != '\0'; j++)
			;
		to_concat(i, j, s1, s2, &ptr);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		to_concat(i, 0, s1, '\0', &ptr);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		to_concat(j, 0, s2, '\0', &ptr);
	}
	else
		ptr = rtn;
	return (ptr);
}
