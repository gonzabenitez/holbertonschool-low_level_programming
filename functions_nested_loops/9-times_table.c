# include <stdio.h>
# include "main.h"
/**
 * times_table - guess it
 *
 * Return:  0 if Succeess
*/

void times_table(void)
{
	int i, j, k;
	char fd,ld;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				fd = (k % 10) + '0';
				ld = k;
				while (ld >= 10)
					ld = (ld / 10);
				ld = ld + '0';
			}	
			else {
				fd = k + '0';
				ld = ' ';	
	 		}
			if (j != 0)
			{
			_putchar(' ');
			_putchar(ld);
			}
			_putchar(fd);
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
