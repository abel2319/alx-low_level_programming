#include "main.h"

/**
 *_pow_recursion - calcul the factorial of a number
 *@x: number
 *@y: power
 *
 * Return: factorial n
 */
int _pow_recursion(int x, int y)
{
	int prod;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		prod = (x * _pow_recursion(x, y - 1));
	return (prod);
}
