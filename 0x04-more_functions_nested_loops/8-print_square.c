#include "main.h"

/**
 *print_square - Entry to code
 *@size : variable for multiplication
 *
 * Return: Always Nothing (Success)
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
