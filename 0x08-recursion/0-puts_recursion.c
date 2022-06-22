#include "main.h"

/**
 *_puts_recursion - print a string using only _putchar
 *@s: string to print in stdout
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == 0 || *s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
