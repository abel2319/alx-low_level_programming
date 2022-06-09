#include <stdio.h>
#include "main.h"

/**
 * printFibo - Entry to code
 * @n : the number of terms
 *
 * Return : Always Nothings (Success)
 */
void printFibo(int n)
{
	int f1 = 0
	int f2 = 1
	int i = 0;
	int next = 0;

	for (i = 1; i < n; i++) {
		printf("%d ", f2);
		if (f2 < 10)
		{
			_putchar(f2 +'0');
			_putchar(',');
			_putchar(' ');
		}
		else if ((f2 > 10) && (f2 < 100))
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

/**
 * main - Entry to code
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	printFibo(98);
	return 0;
}

