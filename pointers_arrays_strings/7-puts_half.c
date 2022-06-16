# include "main.h"

/**
 * puts_half - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void puts_half(char *s)
{
	int i, j;
	int len = _strlen(s);

	j = len - 1;
	i = 0;

	while (len >= (i * 2))
	{
		_putchar(s[j]);
		j--;
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
