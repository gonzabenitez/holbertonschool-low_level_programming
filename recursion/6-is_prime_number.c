# include "main.h"
# include <stdio.h>
/**
 * is_prime_number - Something useful :)
 *@n: string to be measured
 * Return: Always 0 (Succeess)
*/

int is_prime_number(int n)
{

	int *p;
	int a;

	if (n < 0)
		a = 0;
	else if (n == 0)
		a = 0;
	else if (n == 1)
		a = 0;
	else
	{
		a = n;
		p = &a;
		prime_minister(p, 1);
	}

	return (a);
}

/**
 * prime_minister - returns len of a string
 * @n: string to be measured
 * @p: number add this to test if git will push
 * Return: length of string
*/

void prime_minister(int *p, int n)
{

	n = n + 1;

	if ((*p % n != 0) && (2 * n < *p))
	{
		prime_minister(p, n);
	}
	else if (*p % n == 0)
		*p = 0;
	else
	{
		*p = 1;
		return;
	}
}
