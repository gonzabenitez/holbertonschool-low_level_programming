# include "main.h"

/**
 * puts_half - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void puts_half(char *s)
{
	int i, a;
	int len = _strlen(s);

	if (!(len % 2))
		i = 0;
	else
		i = 1;
	len /= 2;
	a = i;

	while (len + a >= i)
	{
		_putchar(s[len + i]);
		i++;
	}
	_putchar('\n');

}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
