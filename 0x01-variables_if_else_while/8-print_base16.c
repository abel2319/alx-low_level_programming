#include <stdio.h>

/**
* main - Entry to code
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c = 97;
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 0;
	c = 97;
	while (i < 6)
	{
		putchar(c + i);
		i++;
	}

	putchar('\n');
	return (0);
}
