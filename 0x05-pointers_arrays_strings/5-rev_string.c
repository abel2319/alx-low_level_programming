#include <stdio.h>
#include "main.h"
/**
 *rev_string - Entry code
 *@s: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
void rev_string(char *s)
{
	char i = s[0];
	int j = 0;
	int t = 0;

	while (i != '\0')
	{
		j++;
		i = *(s + j);
	}
	if (j != 0)
	{
		j--;
		while (t != (j / 2))
		{
			i = s[t];
			s[t] = s[j - t];
			s[j - t] = i;
			t++;
		}
	}
}
