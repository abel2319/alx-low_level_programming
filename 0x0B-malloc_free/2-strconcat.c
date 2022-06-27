#include <stdlib.h>

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
	char *ptr = NULLL;
	int i = 0;
	int j = 0;
	int t = 0;

	if (s1 && s2)
	{
		for (i = 0; s1[i] != '\0'; i++;)
			;
		for (j = 0; s2[j] != '\0'; j++;)
			;
		ptr = malloc(sizeof(char) * (i + j - 1));
		if (ptr)
		{
			for (t = 0; t <= (i + j - 1); t++)
			{
				if (t < i)
					ptr[t] = s1[t];
				else
					ptr[t - i] = s2[t - i];
			}
		}
	}
	return (ptr)
}
