# include "main.h"
# include <stdio.h>
/**
 * _print_rev_recursion - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void _print_rev_recursion(char *s)
{
	int i;
	
	i = _strlen(s, 0);
	i--;
	_put_n(s, i);			
	_putchar('\n');
	return;
}

/**
 * _put_n - prints char
 *@s: string
 *@n: number
 *Return: void
*/

void _put_n(char *s, int n)
{
	if (n >= 0)
	{
		_putchar(s[n]);
		n--;
		_put_n(s, n);
	}
	else
		return;
}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * @n: number
 * Return: length of string
*/

int _strlen(char *s, int n)
{
	if (s[n] != '\0')
	{
		n++;
		_strlen(s, n);
	}
	else
		return (n);
}
