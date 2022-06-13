#include <stdio.h>

/**
 *_puts - Entry code
 *@str: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
void _puts(char *str)
{
	char i = str[0];
	int j = 0;

	while (i != '\0')
	{
		j++;
		_putchar(i);
		i = *(s + j);
	}
	_putchar('\n');
}
