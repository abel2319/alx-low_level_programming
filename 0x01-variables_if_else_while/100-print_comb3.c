#include <stdio.h>

/**
* main - Entry to code
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;
	int j = 0;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (j < 58)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
