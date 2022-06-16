# include "main.h"

/**
 * _puts - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
