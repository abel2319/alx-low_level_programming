#include <stdio.h>

/**
* main - Entry to code
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c = 97;
	int i = 0;

	while (i < 26)
	{
		putchar(c + i);
		i++;
	}
	putchar('\n');
	return (0);
}
