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

	j = n % 10;
	t = (n % 100) - j;
	i = (n - t - j);
	_putchar((i / 100) + '0');
	_putchar((t / 10) + '0');
	_putchar(j + '0');
}


/**
*when_four_digit - Entry to code
*
* @n : first integer
*
* Return: Always all number (Success)
*/
void when_four_digit(int n)
{
	int i = 0;
	int t = 0;
	int j = 0;
	int k = 0;

	j = n % 10;
	t = (n % 100) - j;
	k = (n % 1000) - t - t;
	i = (n - t - j - k);
	_putchar((i / 1000) + '0');
	_putchar((k / 100) + '0');
	_putchar((t / 10) + '0');
	_putchar(j + '0');
}


/**
*print_number - Entry to code
*
* @n : integer to print
*
* Return: Always all number (Success)
*/
void print_number(int n)
{
	int j = 0;
	int t = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 1000)
		when_four_digit(n);
	if ((n > 99) && (n < 1000))
		when_three_digit(n);
	if (n < 100)
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
	}
}
