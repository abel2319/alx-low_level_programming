#include <stdio.h>
#include "main.h"

/**
*times_table - Entry to code
*
* Return: Always nothing (Success)
*/
void times_table(void)
{
	int c = 0;
	int j = 0;
	int t = 0;
	int i = 0;
	int m = 0;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i <= 9)
		{
			t = j * i;
			if (t < 10)
			{
				c = t % 10;
				_putchar(c + '0');
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				c = t % 10;
				m = (t - c) / 10;
				_putchar(m + '0');
				_putchar(c + '0');
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
				}

			}
			i++;
		}
		_putchar('\n');
	}
}
