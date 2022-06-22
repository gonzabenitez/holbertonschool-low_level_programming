# include <stdio.h>
# include "main.h"
/**
 * print_alphabet_x10 - guess it
 *
 * Return: Always 0 (Succeess)
*/

void print_alphabet_x10(void)
{
	char c, d;

	for (c = 1 ; c <= 10 ; c++)
	{
		for (d = 'a' ; d <= 'z' ; d++)
			_putchar(d);
	_putchar('\n');
	}

}
