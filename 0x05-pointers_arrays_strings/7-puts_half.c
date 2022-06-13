#include <stdio.h>
#include "main.h"

/**
 *puts_half - Entry code
 *@str: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
void puts_half(char *str)
{
	char i = str[0];
	int j = 0;

	while (i != '\0')
	{
		j++;
		i = *(str + j);
	}
	j--;
	j /= 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
