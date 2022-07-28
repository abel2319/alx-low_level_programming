#include "main.h"
/**
 * print_binary - print a number in binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	if (n == 1 || n == 0)
		_putchar('0' + n);
	else
	{
		i = 2;
		while ((i * 2) < n)
			i++;
		_putchar('0' + (i - n));
		n = n - i;
		print_binary(n);
	}
}
