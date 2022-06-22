#include "main.h"

/**
 *_strlen_recursion - print a string using only _putchar
 *@s: string to print in stdout
 *
 * Return: size of s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{	
		return (1 + _strlen_recursion(++s));
	}
	else
		return (0);
	return (0);
}
