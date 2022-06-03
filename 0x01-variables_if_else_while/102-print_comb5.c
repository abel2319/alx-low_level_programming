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
	int k = 0;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			n = i;
			while (n < 58)
			{
				k = j + 1;
				while (k < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(n);
					putchar(k);
					if ((n < 58) && (j < 56) && (i < 58))
					{
						putchar(',');
						putchar(' ');
					}
					k++;
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
