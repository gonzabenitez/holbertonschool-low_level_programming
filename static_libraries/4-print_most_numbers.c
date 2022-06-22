# include <stdio.h>
# include "main.h"
/**
 * print_most_numbers- guess it
 *
 * Return:  0 if Succeess
*/

void print_most_numbers()
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
