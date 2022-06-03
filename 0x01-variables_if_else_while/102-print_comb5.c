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
			k = j + 1;
			while (n < 58)
			{
				/*k = j + 1;*/
				while (k < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(n);
					putchar(k);
					if ((i == 57) && (j == 56))
					{}
					else
					{
						putchar(',');
						putchar(' ');
					}
					k++;
				}
				k = 48;
				n++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
