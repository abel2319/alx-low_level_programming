#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_sign - Entry to code
*
* @n: The charcter to test
* Return: Always 0 or 1 (Success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
