#include <stdio.h>

/**
 * main - Entry to code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	int i = 2;
	int t = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			t = i;
			n /= i;
		}
		else
			i++;
	}
	printf("%d\n", t);
	return (0);
}
