#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - variadic function which print all past in parametres
 * separate by a separator
 * @separator: string which separate each number
 * @n: number of numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	av_list li;
	unsigned int i;

	va_start(li, n);
	if (n != 0)
	{
		if (separato != NULL)
		{
			for (i = 0; i < (n -1); i++)
				printf("%d%s", va_arg(li, int), separator);
			printf("%d%s", va_arg(li, int));

		}
		else
			for (i = 0; i < n; i++)
				printf("%d", va_arg(li, int));
	}
	va_end(li);
}
