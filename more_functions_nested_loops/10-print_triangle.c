# include <stdio.h>
# include "main.h"
/**
 * print_triangle- guess it
 *@i: amount of times
 *
 * Return:  0 if Succeess
*/

void print_triangle(int i)
{
	char j, k, l;

	if (i <= 0)
	{
		i = 0;
		_putchar('\n');
	}
	for (j = 0; j < i ; j++)
	{
		k = i;
		l = j;
		for (l = 0; l < k ; l++)
		{
			if ((j + l) >= (i - 1)) 
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
		
	}
}
