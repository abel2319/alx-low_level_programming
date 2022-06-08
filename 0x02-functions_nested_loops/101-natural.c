#include <stdio.h>
#include "main.h"

/**
 * main - Entry to code
 *
 * Return: Always zero(Success)
 */

int main(void)
{
	long int sum = 0;
	int i = 0;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	n1 = sum % 100000;
	n2 = sum % 10000;
	n3 = sum % 1000;
	n4 = sum % 100;
	_putchar((sum - n1) / 100000 + '0');
	_putchar((n1 - n2) / 10000 + '0');
	_putchar((n2 - n3) / 1000 + '0');
	_putchar((n3 - n4) / 100 + '0');
	_putchar((n4 - (sum % 10)) / 10 + '0');
	_putchar((sum % 10) + '0');
	_putchar('\n');
	return (0);
}
