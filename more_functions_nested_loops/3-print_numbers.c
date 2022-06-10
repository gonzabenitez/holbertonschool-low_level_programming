# include <stdio.h>
# include "main.h"
/**
 * print_numbers- guess it
 *@i: Character value
 *@j: other value
 *
 * Return:  0 if Succeess
*/

void print_numbers(void)
{
	char i;

	for (i='0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
