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
	size--;

	while (i <= size)
	{
		t = ((a + i)[i]);
		printf("en %d: %d = %d", i, i, t);
		j = j + t;
		i++;
	}
	while (i >= 0)
	{
		t = ((a + (size - i))[i]);
		printf("en %d: %d = %d",(size - i), i, t);
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