# include <stdio.h>
# include "main.h"
/**
 * print_numbers- guess it
 *
 * Return:  0 if Succeess
*/

void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
