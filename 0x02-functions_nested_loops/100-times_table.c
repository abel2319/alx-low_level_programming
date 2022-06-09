#include <stdio.h>
#include "main.h"

/**
*for_space - Entry to code
*@i : times for function
*@n : times for betty
*@j : for loop
*
* Return: Always nothing (Success)
*/
void for_space(int i, int j, int n)
{
	if ((i != n) && (j * (i + 1) < 10))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if ((i != n) && (j * (i + 1) >= 10) && (j * (i + 1) < 100))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else if ((i != n) && (j * (i + 1) >= 100))
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
*for_betty - Entry to code
*@i : times for function
*@n : times for betty
*@j : for loop
*
* Return: Always nothing (Success)
*/
void for_betty(int i, int n, int j)
{
	int t = 0;
	int m = 0;
	int c = 0;
	int l = 0;

	while (i <= n)
	{
		t = j * i;
		if (t < 10)
		{
			c = t % 10;
			_putchar(c + '0');
		}
		else if (t < 100)
		{
			c = t % 10;
			m = (t - c) / 10;
			_putchar(m + '0');
			_putchar(c + '0');
		}
		else
		{
			c = t % 10;
			m = ((t % 100) - c) / 10;
			l = (t - (t % 100)) / 100;
			_putchar(l + '0');
			_putchar(m + '0');
			_putchar(c + '0');
		}
		for_space(i, j, n);
		i++;
	}
}
/**
*print_times_table - Entry to code
*@n : times for function
*
* Return: Always nothing (Success)
*/
void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i = 0;
		int j = 0;

		for (j = 0; j <= n; j++)
		{
			i = 0;
			for_betty(i, n, j);
			_putchar('\n');
		}
	}
}
