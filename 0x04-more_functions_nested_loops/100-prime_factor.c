#include <stdio.h>

int main(void)
{
	long int n = 612852475143;
	int i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			n /= i;
		}
		else
			i++;
	}
	printf("\n");
	return (0);
}
