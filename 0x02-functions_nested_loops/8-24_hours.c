#include <stdio.h>
#include "main.h"

/**
*jack_bauer - Entry to code
*
* Return: Always nothing (Success)
*/
void jack_bauer(void)
{
	int c = 0;
	int j = 0;
	int t = 0;
	int i = 0;

	for (j = 0; j < 3; j++)
	{
		i = 0;
		while (i <= 9)
		{
			c = 0;
			while (c <= 5)
			{
				t = 0;
				while (t <= 9)
				{
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(t + '0');
					_putchar('\n');
					t++;
				}
				c++;
			}
			i++;
			if (j == 2 && i == 4)
				break;
		}
	}

}
