# include <stdio.h>
# include "main.h"
/**
 * _print_sign - guess it
 *@i: Character value
 *
 * Return:  0 if Succeess
*/

int print_sign(int i)
{
	if (i > 0 )
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (0);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
}
