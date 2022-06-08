#include <stdio.h>
#include "main.h"

/**
*when_three_digit - Entry to code
*
* @n : first integer
*
* Return: Always all number (Success)
*/

void when_three_digit(int n)
{
	int i = 0;
	int j = 0;
	int t = 0;

	if (n > 0)
	{
		while (n != 97)
		{
			j = n % 10;
			t = (n % 100) - j;
			if (n >= 100)
			{
				i = (n - t - j);
				_putchar((i / 100) + '0');
			}
			_putchar((t / 10) + '0');
			_putchar(j + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
}


/**
*when_three_digit1 - Entry to code
*
* @n : first integer
*
* Return: Always all number (Success)
*/
void when_three_digit1(int *n)
{
	int i = 0;
	int t = 0;
	int j = 0;

	*n = -(*n);
	while (*n != 0)
	{
		j = *n % 10;
		t = (*n % 100) - j;
		_putchar('-');
		if (*n >= 100)
		{
			i = (*n - t - j);
			_putchar((i / 100) + '0');
		}
		if (*n < 10)
		{
			_putchar(j + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((t / 10) + '0');
			_putchar(j + '0');
			_putchar(',');
			_putchar(' ');
		}
		(*n)--;
	}
}


/**
*print_to_98 - Entry to code
*
* @n : first integer
*
* Return: Always all number (Success)
*/
void print_to_98(int n)
{
	int j = 0;
	int t = 0;

	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}
	else if (n > 98)
		when_three_digit(n);
	else
	{
		if (n < 0)
			when_three_digit1(&n);
		if (n >= 0)
		{
			while (n != 99)
			{
				if (n < 10)
					_putchar(n + '0');
				else
				{
					j = n % 10;
					t = (n - j) / 10;
					_putchar(t + '0');
					_putchar(j + '0');
				}
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				n++;
			}
		}
	}
	_putchar('\n');
}
