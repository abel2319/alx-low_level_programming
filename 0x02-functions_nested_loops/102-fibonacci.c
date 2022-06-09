#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int next = 0;

	printf("%lu", f1);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("\n");
	return (0);
}
