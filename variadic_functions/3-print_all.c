# include "variadic_functions.h"
# include <stdio.h>
/**
 * print_all - Something useful :)
 *@format: separatortortortor
 * Return: Always 0 (Succeess)
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	char *arg;
	char *nil = "(nil)";

	if (n > 0)
	{
		va_start(ap, n);

		while (format != 0)
		{
			switch (format[0]){
				case 'c' : printf("%c", va_arg(ap, char));
						break;
				case 'i' : printf("%d", va_arg(ap, int));
						break;
				case 'f' : printf("%f", va_arg(ap, float));
						break;
				case 's' : 
					arg = va_arg(ap, char *);
					if (arg == 0)
						arg = nil;
					printf("%s", arg);
						break;
			}
			if (i + 1 < n)
				printf(", ");
		}
		va_end(ap);
	}
	printf("\n");
}

