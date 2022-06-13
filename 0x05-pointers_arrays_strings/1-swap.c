#include <stdio.h>
/**
 * swap_int(int *a, int *b)
 * @a: first pointeur
 * @b: second pointeur
 *
 * Return: Always nothing (Success)
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
