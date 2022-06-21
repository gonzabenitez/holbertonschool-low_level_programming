# include "main.h"
# include <stdio.h>
/**
 * factorial - Something useful :)
 *@n: string to be measured
 * Return: Always 0 (Succeess)
*/

int factorial(int n)
{
	int i;
	int *p;
	int *pn;
	
	i = 0;

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
 * _facpn - returns len of a string
 * @n: string to be measured
 * @p: number
 * Return: length of string
*/

void _facpn(int *n, int *p)
{

	if (*n > 0)
	{
		*p = (*p) * (*n);
		*n = *n - 1;
		_facpn(n, p);
	}
	else
	{
		return;
	}
}
