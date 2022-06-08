#include <stdio.h>
#include "main.h"

/**
* print_last_digit - Entry to code
*
* @c : integer whose it must return the last digit
* Return: Always last digit of c(Success)
*/
int print_last_digit(int c)
{
	int n = 0;

	n = c % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
