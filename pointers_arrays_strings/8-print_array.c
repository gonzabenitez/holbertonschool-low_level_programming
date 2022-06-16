# include <stdio.h>

/**
 * print_array- Something useful :)
 *@a: pointer to an int
 *@b: pointer to other int
 * Return: Always 0 (Succeess)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n-(i + 1))
		       	printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
