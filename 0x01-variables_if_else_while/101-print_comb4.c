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
	int n = 0;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			n = j + 1;
			while (n < 58)
			{
				putchar(i);
				putchar(j);
				putchar(n);
				if (n < 58)
				{
					putchar(',');
					putchar(' ');
				}
				n++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
