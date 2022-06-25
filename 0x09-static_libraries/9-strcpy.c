#include <stdio.h>
#include "main.h"
/**
 *_strcpy - Entry code
 *@dest: pointer whose we change value
 *@src: source
 *
 * Return: Always char * inothing (Success)
 */
char *_strcpy(char *dest, char *src)
{
	char i = src[0];
	int j = 0;
	int t = 0;

	while (i != '\0')
	{
		j++;
		i = *(src + j);
	}
	if (j != 0)
	{
		while (t != j)
		{
			dest[t] = src[t];
			t++;
			if (t  == j)
			{
				dest[t] = src[t];
			}
		}
	}
	return (dest);
}
