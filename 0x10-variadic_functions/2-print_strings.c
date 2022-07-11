#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - variadic function which print all strin
 * past in parametres separated by a separator
 * @separator: string which separate each number
 * @n: number of numbers
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *str;

	va_start(li, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(li, char*);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(li);
	printf("\n");
}
