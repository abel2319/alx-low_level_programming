#include <stdio.h>
#include "main.h"

/**
 *print_array - Entry code
 *@a: table to print
 *@n: size of table
 *
 * Return: Always nothing (Success)
 */
void print_array(int *a, int n)
{
	int j = 1;

	if (n > 0)
	{
		printf("%d", a[0]);
		while (j < n)
		{
			printf(", %d", a[j]);
			j++;
		}
	}
		printf("\n");
}
