# include "main.h"

/**
 * puts_half - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void puts_half(char *s)
{
	int i;
	int len = _strlen(s);

	i = 0;
	if (!(len % 2))
		len /= 2;
	else
		len = (len - 1) / 2;

	while (len >= i )
	{
		_putchar(s[len + i]);
		i++;
	}

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
