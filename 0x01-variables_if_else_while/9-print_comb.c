#include <stdio.h>

/**
* main - Entry to code
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
