# include <stdio.h>
# include "main.h"
/**
 * print_line- guess it
 *@i: amount of times
 *
 * Return:  0 if Succeess
*/

void print_line(int i)
{
	if (i < 0)
		i = 0;

	for (; i > 0 ; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
