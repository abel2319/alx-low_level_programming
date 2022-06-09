#include "main.h"

/**
 *more_numbers - Entry to code
 *
 * Return: Always nothing (Success)
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar('1');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
