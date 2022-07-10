#include <stdarg.h>

/**
 * sum_them_all - variadic function which some
 * all parametres that we pass
 * @n: number of parametres past to the function
 *
 * Return: sum of all parametres
 * Or 0 if n == 
 */
int sum_them_all(const unsigned int n,...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start (ap, count);
	sum = 0;66
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end (ap);
	return (sum);
}
