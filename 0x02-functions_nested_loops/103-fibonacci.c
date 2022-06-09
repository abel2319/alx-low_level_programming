#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int next = 0;
	unsigned long int sum = 0;

	while (f2 < 4000000)
	{
		if (f2 % 2 == 0)
			sum += f2;
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
