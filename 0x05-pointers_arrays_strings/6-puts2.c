#include <stdio.h>
#include "main.h"

/**
 *puts2 - Entry code
 *@str: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
void puts2(char *str)
{
	char i = str[0];
	int j = 0;

	while (i != '\0')
	{
		if (j % 2 == 0)
			_putchar(i);
		j++;
		i = *(str + j);
	}
	_putchar('\n');
}
