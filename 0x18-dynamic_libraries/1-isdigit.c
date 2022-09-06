#include "main.h"

/**
 *_isdigit - Entry to code
 *@c : variable whose we verify if ti is uppercase
 *
 * Return: Always 0 or 1 (Success)
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
