# include "main.h"

/**
 * puts2 - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 || !(i % 2))
			_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
