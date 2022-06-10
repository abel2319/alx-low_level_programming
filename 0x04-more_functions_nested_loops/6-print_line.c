#include "main.h"

/**
 *print_line - Entry to code
 *@n : variable for multiplication
 *
 * Return: Always Nothing (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
