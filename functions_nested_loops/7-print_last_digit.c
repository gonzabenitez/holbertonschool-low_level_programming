# include <stdio.h>
# include "main.h"
/**
 * print_last_digit - guess it
 *@i: Character value
 *
 * Return:  0 if Succeess
*/

int print_last_digit(int i)
{
	if (i < 0)
		i=-1*i;
	i = i % 10;
	_putchar(i + '0');
	return (i);
}
