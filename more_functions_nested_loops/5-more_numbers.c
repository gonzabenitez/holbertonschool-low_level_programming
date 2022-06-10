# include <stdio.h>
# include "main.h"
/**
 * more_numbers- guess it
 *
 * Return:  0 if Succeess
*/

void more_numbers(void)
{
	char i, j, k;

	for (k = 0 ; k < 10 ; k++)
	{

	for (i = 0 ; i <= 14 ; i++)
	{
		j = i + '0';
		if (i > 9)
		{
			j = (i % 10) + '0';
			_putchar('1');
		}
		_putchar(j);
	}
	_putchar('\n');
	}
}
