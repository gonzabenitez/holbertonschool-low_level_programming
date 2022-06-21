# include "main.h"
# include <stdio.h>
/**
 * _strlen_recursion - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

int _strlen_recursion(char *s)
{
	int i=0;
	int *p;
	p = &i;
	_pstrlen(s, p);
	return (i);
}

/**
 * _pstrlen - returns len of a string
 * @s: string to be measured
 * @n: number
 * Return: length of string
*/

void _pstrlen(char *s, int *p)
{
	int n = *p
	if (s[n] != '\0')
	{
		n++;
		_pstrlen(s, n);
	}
	else
	{
		n--;
		*p = n;
		return;
	}
}
