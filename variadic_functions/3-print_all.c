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
	char *arg;
	char *nil = "(nil)";
	unsigned int n;

	if (format != 0)
	{
		while (format != 0)
			n++;

		va_start(ap, format);

		while (format != 0)
		{
			switch (format[0]){
				case 'c' : printf("%c", va_arg(ap, int));
						break;
				case 'i' : printf("%d", va_arg(ap, int));
						break;
				case 'f' : printf("%f", va_arg(ap, double));
						break;
				case 's' : 
					arg = va_arg(ap, char *);
					if (arg == 0)
						arg = nil;
					printf("%s", arg);
						break;
			}
			printf(", ");
		}
		va_end(ap);
	}
	printf("\n");
}

