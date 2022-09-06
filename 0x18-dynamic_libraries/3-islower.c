#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _islower - Entry to code
*
* @c: The charcter to test
* Return: Always r (Success)
*/
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
