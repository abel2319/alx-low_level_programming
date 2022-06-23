#include "main.h"

/**
 *sqrt_research - calcul the square rooti of a number
 *@n: number
 *@i: to research
 *
 * Return: square root of n
 */
int sqrt_research(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i > (n / 2))
		return (-1);
	return (sqrt_research(n, i + 1));
}


/**
 *_sqrt_recursion - calcul the square rooti of a number
 *@n: number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_research(n, 0));
}
