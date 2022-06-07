#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* main - Entry to code
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char string[] = "_putchar";
	size_t i = 0;

	for(i = 0; i < strlen( string ); i++)
		_putchar( string[i] );
	_putchar('\n');
	return (0);
}
