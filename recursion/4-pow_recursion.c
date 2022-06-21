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
	int a, b;

	a = x;
	b = y;

	if (b < 0)
		a = -1;
	else if (b == 0)
		a = 1;
	else
	{
		p = &a;
		pn = &b;
		_facpn(pn, p);
	}
	return (a);
}

/**
 * _facpn - returns len of a string
 * @n: string to be measured
 * @p: number add this to test if git will push
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
