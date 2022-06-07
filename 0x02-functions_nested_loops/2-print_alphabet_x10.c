#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - Entry to code
*
* Return: Always nothing (Success)
*/
void print_alphabet_x10(void)
{
	int c = 97;
	int i = 0;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		c = 97;
		while (i < 26)
		{
			_putchar(c + i);
			i++;
		}
		_putchar('\n');
	}
}
