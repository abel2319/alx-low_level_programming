#include <stdio.h>
#include "main.h"

/**
* print_alphabet - Entry to code
*
* Return: Always nothing (Success)
*/
void print_alphabet(void)
{
	int c = 97;
	int i = 0;

	while (i < 26)
	{
		_putchar(c + i);
		i++;
	}
	_putchar('\n');
}
