#include <stdio.h>
#include "main.h"
/**
 *print_rev - Entry code
 *@s: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
void print_rev(char *s)
{
	char i = s[0];
	int j = 0;

	while (i != '\0')
	{
		j++;
		i = *(s + j);
	}

	i = s[j];

	while (j != 0)
	{
		_putchar(i);
		j--;
		i = *(s + j);
	}
	_putchar('\n');
}
