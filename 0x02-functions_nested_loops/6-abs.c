#include <stdio.h>
#include "main.h"

/**
* _abs - Entry to code
*
* @c : integer whose it must return positive value
* Return: Always positive value of n (Success)
*/
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
