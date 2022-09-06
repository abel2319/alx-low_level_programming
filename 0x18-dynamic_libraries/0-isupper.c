#include "main.h"

/**
 *_isupper - Entry to code
 *@c : variable whose we verify if ti is uppercase
 *
 * Return: Always 0 or 1 (Success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
