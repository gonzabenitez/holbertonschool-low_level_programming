# include <stdio.h>
# include "main.h"
/**
 * print_diagonal- guess it
 *@i: amount of times
 *
 * Return:  0 if Succeess
*/

void print_diagonal(int i)
{
	char j, k;

	if (i <= 0)
	{
		i = 0;
		_putchar('\n');
	}
	for (j = 0; j < i ; j++)
	{
		k = j;
		for (; k > 0 ; k--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
