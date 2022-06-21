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
	int *fck;
	int a, b, c;

	a = x;
	b = y;
	c = x;

	if (b < 0)
		a = -1;
	else if (b == 0)
		a = 1;
	else
	{

		p = &a;
		pn = &b;
		fck = &c;
		_tfacpn(pn, p, fck);
	}
	return (a);
}

/**
 * _tfacpn - returns len of a string
 * @n: string to be measured
 * @p: number add this to test if git will push
 * @fck: wtf
 * Return: length of string
*/

void _tfacpn(int *n, int *p, int *fck)
{

	*n = *n - 1;

	if (*n > 0)
	{
		*p *= (*fck);

		_tfacpn(n, p, fck);
	}
	else
	{
		return;
	}
}
