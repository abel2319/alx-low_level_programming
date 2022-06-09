#include "main.h"

/**
 *print_numbers - Entry to code
 *
 * Return: Always nothing (Success)
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
