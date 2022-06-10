#include <stdio.h>

int main(void)
{
	long int n = 612852475143;
	int i = 2;
	int j = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			j = i;
			n /= i;
		}
		else
			i++;
	}

	printf("%d\n", j);
	
	return (0);
}
