#include <stdio.h>

/**
 *_strlen - Entry code
 *@s: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
int _strlen(char *s)
{
	char i = s[0];
	char j = 0;

	while (i != '\0')
	{
		j++;
		i = *(s + j);
	}
	return (j);
}
