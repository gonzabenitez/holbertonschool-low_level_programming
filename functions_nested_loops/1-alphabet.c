# include <stdio.h>
# include "main.h"
/**
 * print_alphabet - guess it
 *
 * Return: Always 0 (Succeess)
*/

void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
		_putchar(c);
	
	_putchar('\n');
	
	return;
}
