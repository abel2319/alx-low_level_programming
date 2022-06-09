#include "main.h"

/**
 *_isupper - Entry to code
 *@c : variable whose we verify if ti is uppercase
 *
 * Return : Always 0 or 1
 */
int _isupper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
