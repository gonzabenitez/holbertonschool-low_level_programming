# include <stdio.h>
# include "main.h"
/**
 * print_square- guess it
 *@i: amount of times
 *
 * Return:  0 if Succeess
*/

void print_square(int i)
{
	char j, k;

	if (i <= 0)
	{
		i = 0;
		_putchar('\n');
	}
	for (j = 0; j < i ; j++)
	{
		k = i;
		for (; k >= 0 ; k--)
			_putchar('#');
		_putchar('\n');
	}
}
