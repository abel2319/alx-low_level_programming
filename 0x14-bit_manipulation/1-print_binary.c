#include "main.h"
/**
 * print_binary - print a number in binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	if (n == 1 || n == 0)
	{
		_putchar('0' + n);
		return
	}
	else
	{
		_putchar('0' + (n % 2));
		n = (n - (n % 2)) / 2;
		print_binary(n);
	}
}
