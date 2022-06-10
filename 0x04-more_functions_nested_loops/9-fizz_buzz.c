#include "main.h"

/**
 *main - Entry to code
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	
	_putchar('1');
	for (i = 2; i < 101; i++)
	{
		_putchar(' ');
		if ((i % 3) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		if ((i % 5) == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if ((i % 3) && (i % 5))
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				j = i % 10;
				_putchar((i - j) / 10 + '0');
				_putchar(j + '0');
			}
		}
	}
	_putchar('\n');
	return (0);
}
