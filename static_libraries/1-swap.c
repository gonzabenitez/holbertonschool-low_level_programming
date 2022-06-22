# include <stdio.h>

/**
 * swap_int - Something useful :)
 *@a: pointer to an int
 *@b: pointer to other int
 * Return: Always 0 (Succeess)
*/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
