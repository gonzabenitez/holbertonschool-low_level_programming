# include "main.h"
# include <stdio.h>
/**
 * factorial - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

int factorial(int n)
{
	int i;
	int *p;
	int *pn;

	if (n < 0)
		i = -1;
	else if (n == 0)
		i = 1;
	else
	{
		p = &i;
		pn = &n;
		_facpn(pn, p);
	}
	return (i);
}

/**
 * _pstrlen - returns len of a string
 * @s: string to be measured
 * @p: number
 * Return: length of string
*/

void _facpn(int *n, int *p)
{

	if (*n > 0)
	{
		*p = (*p) * (*n);
		n--;
		_facpn(n, p);
	}
	else
	{
		return;
	}
}
