#include <stdio.h>

/**
 * main - fibonacci 98
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
	unsigned long int f_half1, f_half2, l_half1, l_half2, part1, part2;

	printf("%lu", f1);

	for (i = 1; i < 93; i++)
	{
		printf(", %lu", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}

	f_half1 = f1 / 10000000000;
	f_half2 = f2 / 10000000000;
	l_half1 = f1 % 10000000000;
	l_half2 = f2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		part1 = f_half1 + f_half2;
		part2 = l_half1 + l_half2;
		if (l_half2 + l_half2 > 9999999999)
		{
			part1 += 1;
			part2 %= 10000000000;
		}

		printf(", %lu%lu", part1, part2);

		f_half1 = l_half1;
		f_half2 = l_half2;
		l_half1 = part1;
		l_half2 = part2;
	}
	printf("\n");
	return (0);
}
