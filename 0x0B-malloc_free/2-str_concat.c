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
void to_concat(int i, int j, char *s1, char *s2, char *ptr)
{
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
	int t = 0;
	char *rtn = '\0';

	if (s1 && s2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		for (j = 0; s2[j] != '\0'; j++)
			;
		to_concat(i, j, s1, s2, ptr);
	}
	else if (s1 && !s2)
	{
		for (i = 0; s1[1] != '\0'; i++)
			;
		to_concat(i, 0, s1, s2, ptr);
	}
	else if (!s1 && s2)
	{
		for (j = 0; s2[1] != '\0'; j++)
			;
		to_concat(j, 0, s2, s1, ptr);
	}
	else
		ptr = rtn;
	return (ptr);
}
