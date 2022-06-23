#include "main.h"

/**
 *prime_checked - calcul the square rooti of a number
 *@n: number
 *@i: to research
 *
 * Return: square root of n
 */
int prime_checked(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > (n / 2))
		return (1);
	return (prime_checked(n, i + 1));
}


/**
 *is_prime_number - veerify if n is a prime number
 *@n: number
 *
 * Return: 1 if it is, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (n);
	return (prime_checked(n, 2));
}
