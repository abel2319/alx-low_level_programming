#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - variadic function which print all past in parametres
 * separate by a separator
 * @separator: string which separate each number
 * @n: number of numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	va_start(li, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(li, int));
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(li);
	printf("\n");
}
