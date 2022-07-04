# include "variadic_functions.h"
# include <stdio.h>
/**
 * print_numbers - Something useful :)
 *@n: string to be measured
 *@separator: separatortortortor
 * Return: Always 0 (Succeess)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator != 0 && i + 1 < n)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}

