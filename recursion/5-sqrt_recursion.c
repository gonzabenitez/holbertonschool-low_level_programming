# include "main.h"
# include <stdio.h>
/**
 * _sqrt_recursion - Something useful :)
 *@n: string to be measured
 * Return: Always 0 (Succeess)
*/

int _sqrt_recursion(int n)
{

	int *p;
	int a;

	if (n < 0)
		a = -1;
	else if (n == 0)
		a = 0;
	else
	{
		a = n;
		p = &a;
		_sqrtr(p, 0);
	}

	return (a);
}

/**
 * _sqrtr - returns len of a string
 * @n: string to be measured
 * @p: number add this to test if git will push
 * Return: length of string
*/

void _sqrtr(int *p, int n)
{

	*n = *n + 1;

	if ((n * n) < *p)
	{
		_sqrtr(p, n);
	}
	else if (n * n == *p)
		*p = n;
	else
	{
		*p = -1;
		return;
	}
}
