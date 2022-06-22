#include "main.h"

/**
 *_print_rev_recursion - print a string in reverse using only _putchar
 *@s: string to print in stdout
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
