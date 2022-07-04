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
	int sum = 0;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (i > 0)
				printf(" %d", va_arg(ap, int));
			else
				printf("%d", va_arg(ap, int));
			if (separator != 0)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}

