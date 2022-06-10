#include "main.h"

/**
 *print_diagonal - Entry to code
 *@n : variable for multiplication
 *
 * Return: Always Nothing (Success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
