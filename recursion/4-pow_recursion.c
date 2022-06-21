# include "main.h"
# include <stdio.h>
/**
 * _pow_recursion - Something useful :)
 *@x: string to be measured
 *@y: to the power of why?
 * Return: Always 0 (Succeess)
*/

int _pow_recursion(int x, int y)
{
	int *p;
	int *pn;


	if (y < 0)
		x = -1;
	else if (y == 0)
		x = 1;
	else
	{
		p = &x;
		pn = &y;
		_facpn(pn, p);
	}
	return (x);
}

/**
 * _facpn - returns len of a string
 * @n: string to be measured
 * @p: number
 * Return: length of string
*/

void _facpn(int *n, int *p)
{
	*n = *n - 1;

	if (*n > 1)
	{
		*p = (*p) * (*p);
		_facpn(n, p);
	}
	else
	{
		return;
	}
}
