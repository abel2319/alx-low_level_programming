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
	int n = 0;

	(*ptr) = malloc(sizeof(char) * (i + j + 1));
	if (*ptr)
	{
		for (n = 0; s1[n] != '\0'; n++)
			(*ptr)[n] = s1[n];
		for (t = 0; t < j; t++)
			(*ptr)[n + t] = s2[t];
		(*ptr)[n + t] = '\0';
	}
}

/**
 *string_nconcat - concatane the two strings paste as arguments
 *@s1: first string
 *@s2: second string
 *@n: limit
 *
 * Return: Pointer of new string
 * Or NULL if one of strings is NULL or  allocation failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	int i = 0;
	int j = 0;

	if (n == 0)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		to_concat(0, 0, '\0', '\0', &ptr);
	else if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		for (j = 0; s2[j] != '\0'; j++)
			;
		if (j <= (int)n)
			to_concat(i, j, s1, s2, &ptr);
		else
			to_concat(i, n, s1, s2, &ptr);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		/*to_concat(i, 0, s1, '\0', &ptr);*/
		return (s1);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		/*to_concat(j, 0, s2, '\0', &ptr);*/
		return (s2);
	}
	return (ptr);
}
