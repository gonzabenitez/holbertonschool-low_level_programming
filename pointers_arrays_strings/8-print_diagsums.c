# include "main.h"
# include <stdio.h>

/**
 * print_diagsums - Something useful :)
 *@a: string to be measured
 *@size: doesnt really matters :') right?
 * Return: Always 0 (Succeess)
*/

void print_diagsums(int *a, int size)
{
	int i, j, k, t;

	j = 0;
	i = 0;
	k = 0;
	t = 0;

	while (i < size)
	{	
		j += *(a + t);
		i++;
		t += size + 1;
	}
	t -= (size - 1);
	while (i > 0)
	{
		k += *(a + t);
		t -= (size - 1);
		i--;
	}
	printf("%d, %d\n", j, k);
}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
