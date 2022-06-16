# include "main.h"

/**
 * print_rev - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void print_rev(char *s)
{
	int j;
	int len = _strlen(*s);

	j = len;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
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
