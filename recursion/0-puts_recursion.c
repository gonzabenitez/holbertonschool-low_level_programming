# include "main.h"

/**
 * _puts_recursion - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void _puts_recursion(char *s)
{

	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

int _strlen(char *s, int n)
{
	if (s[n] != '\0')
	{
		n++;
		_strlen(s, n);
	}
	return (n);
}
