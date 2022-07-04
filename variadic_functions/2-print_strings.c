# include "variadic_functions.h"
# include <stdio.h>
/**
 * print_strings - Something useful :)
 *@n: string to be measured
 *@separator: separatortortortor
 * Return: Always 0 (Succeess)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *arg;
	char *nil = "(nil)";

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			arg = va_arg(ap, char *);
			if (arg == 0)
				arg = nil;
			printf("%s", arg);
			if (separator != 0 && i + 1 < n)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}

